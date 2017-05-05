//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    int ans = 0;
    for(int i=0; i<v.size(); ++i) {
        ans = min(ans+t, v[i]+t);
    }
    cout << ans << endl;
    return 0;
}

