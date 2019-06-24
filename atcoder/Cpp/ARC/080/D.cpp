#include <bits/stdc++.h>
using namespace std;

int dx[]{0, 1, 0, -1};
int dy[]{-1, 0, 1, 0};
int field[1001][1001] = {0};

int main() {
    int h, w;
    cin >> h >> w;
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];

    int cx = 0;
    int cy = 0;
    for(int i=0; i<n; ++i) {
        int a = i+1;
        int a_num = v[i];
        int c = 0;
        stack<pair<int, int>> que;
        que.push(make_pair(cx, cy));
        while(!que.empty()) {
            auto p = que.top();
            que.pop();
            int x = p.first;
            int y = p.second;
            if(c>=a_num) {
                cx = x;
                cy = y;
                break;
            }
            field[x][y] = a;
            c++;
            for(int l=0; l<4; ++l) {
                int nx = x + dx[l];
                int ny = y + dy[l];
                if(nx>=0&&nx<h&&ny>=0&&ny<w&&field[nx][ny]==0) {
                    que.push(make_pair(nx, ny));
                }
            }
        }
    }

    for(int i=0; i<h; ++i) {
        for(int j=0; j<w; ++j) {
            if(j==0) cout << field[i][j];
            else cout << " " << field[i][j];
        }
        cout << endl;
    }
    return 0;
}

