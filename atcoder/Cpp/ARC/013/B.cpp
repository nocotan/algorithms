//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    vector<int> v(3);
    for(int i=0; i<v.size(); ++i) v[i] = -1;
    for(int i=0; i<n; ++i) {
        vector<int> u(3);
        for(int j=0; j<3; ++j) cin >> u[j];
        sort(u.begin(), u.end());
        sort(v.begin(), v.end());
        for(int j=0; j<3; ++j) v[j] = max(v[j], u[j]);
    }

    cout << accumulate(v.begin(), v.end(), 1, multiplies<int>()) << endl;
    return 0;
}

