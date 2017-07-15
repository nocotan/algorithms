//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];

    int sum = accumulate(v.begin(), v.end(), 0LL);
    int ans = 1e+18;
    int tmp = 0;
    for(int i=0; i<v.size()-1; ++i) {
        tmp += v[i];
        sum -= v[i];
        ans = min(ans, abs(tmp-sum));
    }
    cout << ans << endl;
    return 0;
}

