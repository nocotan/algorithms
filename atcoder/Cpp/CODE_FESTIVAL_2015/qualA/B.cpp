//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    int ans = 0;
    for(int i=0; i<n; ++i) {
        ans += v[i] * pow(2, n-i-1);
    }
    cout << ans << endl;
    return 0;
}

