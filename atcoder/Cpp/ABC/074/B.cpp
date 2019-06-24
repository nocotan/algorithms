//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int ans = 0;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        ans += min(a*2, (k-a)*2);
    }
    cout << ans << endl;
    return 0;
}

