//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int memo[100001];
auto main() -> signed {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for(int i=0; i<n; ++i) {
        int l, r, s;
        cin >> l >> r >> s;
        l--;
        r--;
        memo[l] += s;
        memo[r+1] -= s;
        ans += s;
    }
    for(int i=0; i<m; ++i) memo[i+1] += memo[i];

    int min_s = 1e+9;
    for(int i=0; i<m; ++i) {
        min_s = min(min_s, memo[i]);
    }
    ans -= min_s;
    cout << ans << endl;
    return 0;
}

