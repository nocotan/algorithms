//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    vector<int> v(3);
    for(int i=0; i<3; ++i) cin >> v[i];
    sort(v.begin(), v.end());
    cout << v[0] + v[1] << endl;
    return 0;
}

