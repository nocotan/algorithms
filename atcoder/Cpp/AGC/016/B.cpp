//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    bool ans = true;
    int cnt = v[0] + 1;
    for(int i=1; i<v.size(); ++i) {
        cout << cnt << endl;
        cnt = min(cnt, v[i]+1);
    }
    cout << cnt << endl;
    cout << ans << endl;
    return 0;
}

