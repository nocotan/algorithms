//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    int sum = 0;
    int max_d = -1;
    int min_d = 1e+9;
    for(int i=0; i<n; ++i) {
        int d;
        cin >> d;
        sum += d;
        max_d = max(max_d, d);
    }
    if(sum-max_d > max_d) min_d = 0;
    else min_d = 2*max_d-sum;
    cout << sum << endl;
    cout << min_d << endl;
    return 0;
}

