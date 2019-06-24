//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    double n, va, vb, l;
    cin >> n >> va >> vb >> l;
    for(int i=0; i<n; ++i) {
        double s = l / va;
        double u = s * vb;
        l = u;
    }
    if(l<=1e-6) l = 0;
    cout << setprecision(10) <<l << endl;
    return 0;
}

