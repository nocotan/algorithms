module visualizer {
    // RDLU
    const dy = [0, 1, 0, -1];
    const dx = [1, 0, -1, 0];

    export const init = () => {
        const file1 = <HTMLInputElement> document.getElementById("file1");
        const file2 = <HTMLInputElement> document.getElementById("file2");
        const result = <HTMLInputElement> document.getElementById("result");

        const wrapper = document.getElementById("wrapper");
        const canvas = <HTMLCanvasElement> document.getElementById("canvas");

        const load_to = (file, callback) => {
            const reader = new FileReader();
            reader.readAsText(file);
            reader.onloadend = function () {
                callback(reader.result);
            }
        };

        const getInt = (s: string, lineno: number) => {
            if (s == null) {
                throw new Error(`数値のパースに失敗しました at line: ${lineno}`);
            }
            if (s.match(/^\d+$/)) {
                return parseInt(s);
            }
            throw new Error(`数値のパースに失敗しました at line: ${lineno}`);
        };

        class Board {
            public h: number;
            public w: number;
            public k: number;
            public value: number[][];
            public color: number[][];
            public total_score: number = 0;

            constructor(value1: string) {
                const lines = value1.trim().split("\n");
                const l1 = lines[0].trim().split(" ");
                this.h = getInt(l1[0], 1);
                this.w = getInt(l1[1], 1);
                this.k = getInt(l1[2], 1);

                this.value = [];
                this.color = [];

                for (let i = 0; i < this.h; i++) {
                    this.value[i] = [];
                    this.color[i] = [];
                    const line = lines[i + 1];
                    for (let j = 0; j < this.w; j++) {
                        this.value[i][j] = getInt(line[j], i + 1);
                        this.color[i][j] = -1;
                    }
                }
            }

            read = (value2: string) => {
                const lines = value2.trim().split("\n");
                const piece_count = getInt(lines[0].trim(), 1);
                const visited: boolean[] = new Array(this.h * this.w);
                let total_score = 0;

                // 連結性判定
                const dfs = (y, x) => {
                    visited[y * this.w + x] = true;
                    let ret = 1;
                    for (let dir = 0; dir < 4; dir++) {
                        let ny = y + dy[dir];
                        let nx = x + dx[dir];
                        if (!this.inside(ny, nx)) continue;
                        if (this.color[ny][nx] != this.color[y][x]) continue;
                        if (visited[ny * this.w + nx]) continue;
                        ret += dfs(ny, nx);
                    }
                    return ret;
                };

                for (let i = 0; i < piece_count; i++) {
                    let score = 1;
                    let px = -1, py = -1;
                    for (let j = 0; j < this.k; j++) {
                        const lineno = i * this.k + j + 1;
                        const cols = lines[lineno].trim().split(" ");
                        const y = py = getInt(cols[0], lineno) - 1;
                        const x = px = getInt(cols[1], lineno) - 1;
                        if (!this.inside(y, x)) {
                            console.warn(lines[lineno], cols);
                            throw new Error(`WA: (y=${y + 1}, x=${x + 1}) はグリッドの範囲外です: ${lineno + 1} 行目, ピース ${i + 1}`);
                        }
                        if (this.color[y][x] != -1) {
                            console.warn(lines[lineno], cols);
                            throw new Error(`WA: マス (y=${y + 1}, x=${x + 1}) は既にピース ${this.color[y][x] + 1} によって使われています: ${lineno + 1} 行目, ピース ${i + 1}`);
                        }
                        score *= this.value[y][x];
                        this.color[y][x] = i;
                    }
                    if (dfs(py, px) != this.k) {
                        throw new Error(`WA: ピース ${i + 1} が連結ではありません`);
                    }
                    total_score += score;
                }
                this.total_score = total_score;
            };

            public inside = (y, x) => {
                return (0 <= y) && (y < this.h) && (0 <= x) && (x < this.w);
            }
        }

        const draw = (board: Board) => {
            // とりあえず固定
            canvas.width = 1600;
            canvas.height = 1600;

            const colors = [
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

            const ctx = canvas.getContext('2d');
            const pad = 1;
            const width = canvas.width - pad * 2;
            const height = canvas.height - pad * 2;
            const cell_size = Math.floor(Math.min(height / board.h, width / board.w));

            ctx.fillStyle = "white";
            ctx.fillRect(0, 0, canvas.width, canvas.height);

            const ctop = (y) => {
                return y * cell_size + pad;
            };

            const clef = (x) => {
                return x * cell_size + pad;
            };

            const cbot = (y) => {
                return (y + 1) * cell_size + pad;
            };

            const crig = (x) => {
                return (x + 1) * cell_size + pad;
            };

            ctx.textAlign = "center";
            ctx.font = `${cell_size * 0.8}px sans-serif, 'Meiryo'`;

            // マス描画
            const draw_cell = (y, x) => {
                let color = board.color[y][x];
                let value = board.value[y][x];

                let ty = cbot(y) - (cell_size * 0.2);
                let tx = (clef(x) + crig(x)) / 2;

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

                for (let dir = 0; dir < 4; dir++) {
                    let ny = y + dy[dir];
                    let nx = x + dx[dir];
                    let flg = false;

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

            for (let y = 0; y < board.h; y++) {
                for (let x = 0; x < board.w; x++) {
                    draw_cell(y, x);
                }
            }
        };

        const run = (value1, value2) => {
            result.value = '0';
            let board;
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

        const run1 = () => {
            load_to(file1.files[0], (value1) => {
                load_to(file2.files[0], (value2) => {
                    run(value1, value2);
                });
            });
        };
        return run1;
    };
}

window.onload = () => {
    document.getElementById("run").onclick = visualizer.init();
};

