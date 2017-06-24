//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    vector<int> v(7);
    vector<int> u(7);
    for(int i=0; i<7; ++i) cin >> v[i];
    for(int i=0; i<7; ++i) cin >> u[i];

    int ans = 0;
    for(int i=0; i<7; ++i) ans += max(v[i], u[i]);
    cout << ans << endl;
    return 0;
}

