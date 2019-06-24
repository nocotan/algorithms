//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];

    sort(v.begin(), v.end());
    if(v[0]<n) cout << 0 << endl;
    else {
        int sum = accumulate(v.begin(), v.end(), 0LL);
        cout << sum-1 << endl;
    }
    return 0;
}

