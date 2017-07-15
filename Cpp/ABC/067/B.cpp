//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    for(int i=0; i<n; ++i) cin >> l[i];
    sort(l.begin(), l.end(), greater<int>());
    int ans = 0;
    for(int i=0; i<k; ++i) ans += l[i];
    cout << ans << endl;
    return 0;
}

