//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int memo[1000002];
auto main() -> signed {
    int n;
    cin >> n;
    for(int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b;
        memo[a]++;
        memo[b+1]--;
    }
    int ans = -1;
    for(int i=1; i<1000001; ++i) {
        memo[i] += memo[i-1];
    }
    for(int i=0; i<1000001; ++i) {
        ans = max(ans, memo[i]);
    }
    cout << ans << endl;
    return 0;
}

