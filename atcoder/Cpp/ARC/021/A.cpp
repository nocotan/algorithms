//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int dx[]{1, 0, -1, 0};
int dy[]{0, 1, 0, -1};

auto main() -> signed {
    vector<vector<int> > v(4);
    for(int i=0; i<4; ++i) {
        vector<int> u(4);
        for(int j=0; j<4; ++j) {
            cin >> u[j];
        }
        v[i] = u;
    }

    for(int i=0; i<4; ++i) {
        for(int j=0; j<4; ++j) {
            for(int k=0; k<4; ++k) {
                int nx = i + dx[k];
                int ny = j + dy[k];
                if(nx>=0&&nx<4&&ny>=0&&ny<4) {
                    if(v[i][j]==v[nx][ny]) {
                        cout << "CONTINUE" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "GAMEOVER" << endl;
    return 0;
}

