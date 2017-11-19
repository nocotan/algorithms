#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, m;
    cin >> n >> m;

    int st = (n - m) * 100;
    int y = 1;
    for(int i=0; i<m; ++i) y *= 2;

    int ans = (st + 1900 * m) * y;
    cout << ans << endl;

    return 0;
}

