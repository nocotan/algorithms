#include <bits/stdc++.h>
using namespace std;

#define int long long

int d[10][10];

void wf() {
    for(int k=0; k<10; ++k) {
        for(int i=0; i<10; ++i) {
            for(int j=0; j<10; ++j) {
                d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
            }
        }
    }
}

signed main() {
    for(int i=0; i<10; ++i) {
        for(int j=0; j<10; ++j) d[i][j] = 1e+9;
    }

    int h, w;
    cin >> h >> w;
    for(int i=0; i<10; ++i) {
        for(int j=0; j<10; ++j) {
            int a;
            cin >> a;
            d[i][j] = a;
        }
    }
    wf();
    int ans = 0;
    for(int i=0; i<h; ++i) {
        for(int j=0; j<w; ++j) {
            int a;
            cin >> a;
            if(a<0) continue;
            ans += d[a][1];
        }
    }
    cout << ans << endl;
    return 0;
}

