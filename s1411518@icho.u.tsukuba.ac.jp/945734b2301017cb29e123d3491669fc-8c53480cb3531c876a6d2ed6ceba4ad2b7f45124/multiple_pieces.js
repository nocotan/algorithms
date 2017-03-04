var visualizer;
(function (visualizer) {
    // RDLU
    var dy = [0, 1, 0, -1];
    var dx = [1, 0, -1, 0];
    visualizer.init = function () {
        var file1 = document.getElementById("file1");
        var file2 = document.getElementById("file2");
        var result = document.getElementById("result");
        var wrapper = document.getElementById("wrapper");
        var canvas = document.getElementById("canvas");
        var load_to = function (file, callback) {
            var reader = new FileReader();
            reader.readAsText(file);
            reader.onloadend = function () {
                callback(reader.result);
            };
        };
        var getInt = function (s, lineno) {
            if (s == null) {
                throw new Error("\u6570\u5024\u306E\u30D1\u30FC\u30B9\u306B\u5931\u6557\u3057\u307E\u3057\u305F at line: " + lineno);
            }
            if (s.match(/^\d+$/)) {
                return parseInt(s);
            }
            throw new Error("\u6570\u5024\u306E\u30D1\u30FC\u30B9\u306B\u5931\u6557\u3057\u307E\u3057\u305F at line: " + lineno);
        };
        var Board = (function () {
            function Board(value1) {
                var _this = this;
                this.total_score = 0;
                this.read = function (value2) {
                    var lines = value2.trim().split("\n");
                    var piece_count = getInt(lines[0].trim(), 1);
                    var visited = new Array(_this.h * _this.w);
                    var total_score = 0;
                    // 連結性判定
                    var dfs = function (y, x) {
                        visited[y * _this.w + x] = true;
                        var ret = 1;
                        for (var dir = 0; dir < 4; dir++) {
                            var ny = y + dy[dir];
                            var nx = x + dx[dir];
                            if (!_this.inside(ny, nx))
                                continue;
                            if (_this.color[ny][nx] != _this.color[y][x])
                                continue;
                            if (visited[ny * _this.w + nx])
                                continue;
                            ret += dfs(ny, nx);
                        }
                        return ret;
                    };
                    for (var i = 0; i < piece_count; i++) {
                        var score = 1;
                        var px = -1, py = -1;
                        for (var j = 0; j < _this.k; j++) {
                            var lineno = i * _this.k + j + 1;
                            var cols = lines[lineno].trim().split(" ");
                            var y = py = getInt(cols[0], lineno) - 1;
                            var x = px = getInt(cols[1], lineno) - 1;
                            if (!_this.inside(y, x)) {
                                console.warn(lines[lineno], cols);
                                throw new Error("WA: (y=" + (y + 1) + ", x=" + (x + 1) + ") \u306F\u30B0\u30EA\u30C3\u30C9\u306E\u7BC4\u56F2\u5916\u3067\u3059: " + (lineno + 1) + " \u884C\u76EE, \u30D4\u30FC\u30B9 " + (i + 1));
                            }
                            if (_this.color[y][x] != -1) {
                                console.warn(lines[lineno], cols);
                                throw new Error("WA: \u30DE\u30B9 (y=" + (y + 1) + ", x=" + (x + 1) + ") \u306F\u65E2\u306B\u30D4\u30FC\u30B9 " + (_this.color[y][x] + 1) + " \u306B\u3088\u3063\u3066\u4F7F\u308F\u308C\u3066\u3044\u307E\u3059: " + (lineno + 1) + " \u884C\u76EE, \u30D4\u30FC\u30B9 " + (i + 1));
                            }
                            score *= _this.value[y][x];
                            _this.color[y][x] = i;
                        }
                        if (dfs(py, px) != _this.k) {
                            throw new Error("WA: \u30D4\u30FC\u30B9 " + (i + 1) + " \u304C\u9023\u7D50\u3067\u306F\u3042\u308A\u307E\u305B\u3093");
                        }
                        total_score += score;
                    }
                    _this.total_score = total_score;
                };
                this.inside = function (y, x) {
                    return (0 <= y) && (y < _this.h) && (0 <= x) && (x < _this.w);
                };
                var lines = value1.trim().split("\n");
                var l1 = lines[0].trim().split(" ");
                this.h = getInt(l1[0], 1);
                this.w = getInt(l1[1], 1);
                this.k = getInt(l1[2], 1);
                this.value = [];
                this.color = [];
                for (var i = 0; i < this.h; i++) {
                    this.value[i] = [];
                    this.color[i] = [];
                    var line = lines[i + 1];
                    for (var j = 0; j < this.w; j++) {
                        this.value[i][j] = getInt(line[j], i + 1);
                        this.color[i][j] = -1;
                    }
                }
            }
            return Board;
        }());
        var draw = function (board) {
            // とりあえず固定
            canvas.width = 1600;
            canvas.height = 1600;
            var colors = [
                '#ffeaea',
                '#ffeaf4',
                '#ffeaff',
                '#f4eaff',
                '#eaeaff',
                '#eaf4ff',
                '#eaffff',
                '#eafff4',
                '#eaffea',
                '#f4ffea',
                '#ffffea',
                '#fff4ea',
            ];
            var ctx = canvas.getContext('2d');
            var pad = 1;
            var width = canvas.width - pad * 2;
            var height = canvas.height - pad * 2;
            var cell_size = Math.floor(Math.min(height / board.h, width / board.w));
            ctx.fillStyle = "white";
            ctx.fillRect(0, 0, canvas.width, canvas.height);
            var ctop = function (y) {
                return y * cell_size + pad;
            };
            var clef = function (x) {
                return x * cell_size + pad;
            };
            var cbot = function (y) {
                return (y + 1) * cell_size + pad;
            };
            var crig = function (x) {
                return (x + 1) * cell_size + pad;
            };
            ctx.textAlign = "center";
            ctx.font = cell_size * 0.8 + "px sans-serif, 'Meiryo'";
            // マス描画
            var draw_cell = function (y, x) {
                var color = board.color[y][x];
                var value = board.value[y][x];
                var ty = cbot(y) - (cell_size * 0.2);
                var tx = (clef(x) + crig(x)) / 2;
                if (color == -1) {
                    // 使われていないマス
                    ctx.fillStyle = "lightgray";
                    ctx.fillText(value.toString(), tx, ty);
                }
                else {
                    // 使われているマス
                    ctx.fillStyle = colors[color % colors.length];
                    ctx.fillRect(clef(x), ctop(y), cell_size, cell_size);
                    ctx.fillStyle = "black";
                    ctx.fillText(value.toString(), tx, ty);
                }
                for (var dir = 0; dir < 4; dir++) {
                    var ny = y + dy[dir];
                    var nx = x + dx[dir];
                    var flg = false;
                    if (!board.inside(ny, nx)) {
                        // 外への線は塗る
                        flg = true;
                        if (color == -1) {
                            ctx.strokeStyle = 'lightgray';
                        }
                        else {
                            ctx.strokeStyle = 'black';
                        }
                    }
                    else if (ny >= y && nx >= x) {
                        // 外以外は、右か下のみ見る
                        if (board.color[ny][nx] == color) {
                            // 同じ色
                            if (color == -1) {
                                // 使わない同士なら塗る
                                ctx.strokeStyle = 'lightgray';
                                flg = true;
                            }
                        }
                        else {
                            // 違う色なら塗る
                            ctx.strokeStyle = 'black';
                            flg = true;
                        }
                    }
                    ctx.beginPath();
                    if (flg) {
                        ctx.moveTo(Math.max(clef(x), clef(nx)), Math.max(ctop(y), ctop(ny)));
                        ctx.lineTo(Math.min(crig(x), crig(nx)), Math.min(cbot(y), cbot(ny)));
                    }
                    ctx.stroke();
                }
            };
            for (var y = 0; y < board.h; y++) {
                for (var x = 0; x < board.w; x++) {
                    draw_cell(y, x);
                }
            }
        };
        var run = function (value1, value2) {
            result.value = '0';
            var board;
            try {
                board = new Board(value1);
            }
            catch (e) {
                alert(e);
                console.warn(e);
                result.value = 'ERROR at input';
                return;
            }
            try {
                board.read(value2);
                result.value = board.total_score.toString();
                draw(board);
            }
            catch (e) {
                alert(e);
                console.warn(e);
                result.value = 'WA';
            }
        };
        var run1 = function () {
            load_to(file1.files[0], function (value1) {
                load_to(file2.files[0], function (value2) {
                    run(value1, value2);
                });
            });
        };
        return run1;
    };
})(visualizer || (visualizer = {}));
window.onload = function () {
    document.getElementById("run").onclick = visualizer.init();
};
