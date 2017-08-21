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
        int a;
        cin >> a;
        if(a>v[i]/2) ans++;
    }
    cout << ans << endl;
    return 0;
}

