#include <bits/stdc++.h>
using namespace std;

#define int long long

int dx[]{0,1,0,-1,1,-1,1,-1};
int dy[]{1,0,-1,0,1,-1,-1,1};

signed main() {
    int h, w;
    cin >> h >> w;
    vector<string> v(h);
    for(int i=0; i<h; ++i) cin >> v[i];

    for(int i=0; i<h; ++i) {
        for(int j=0; j<w; ++j) {
            if(v[i][j]=='.') {
                int tmp = 0;
                for(int k=0; k<8; ++k) {
                    int ny = i + dy[k];
                    int nx = j + dx[k];
                    if(nx>=0&&nx<w&&ny>=0&&ny<h&&v[ny][nx]=='#') tmp++;
                }
                v[i][j] = '0' + tmp;
            }
        }
    }
    for(int i=0; i<h; ++i) cout << v[i] << endl;
    return 0;
}

