//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    double ans = 0;
    for(int i=0; i<n; ++i) {
        double a, b;
        cin >> a >> b;
        a *= 1.05;
        ans += a * b;
    }
    cout << (int)ans << endl;
    return 0;
}

