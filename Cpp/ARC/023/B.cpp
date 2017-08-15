//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int field[2001][2001];

signed main() {
    int r, c, d;
    cin >> r >> c >> d;
    for(int i=0; i<r; ++i)
        for(int j=0; j<c; ++j) cin >> field[i][j];

    int ans = -1;
    for(int i=0; i<=r; ++i) {
        for(int j=0; j<=c; ++j) {
            if((i+j)<=d&&(i+j)%2==d%2) ans = max(ans, field[i][j]);
        }
    }
    cout << ans << endl;
    return 0;
}

