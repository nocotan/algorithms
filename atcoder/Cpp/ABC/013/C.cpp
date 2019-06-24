//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n, h;
    cin >>  n >> h;
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int x, y, cost;
    int ans = 1e+18;
    if(h-e*n>0) {
        cout << 0 << endl;
        return 0;
    }

    for(int i=0; i<n+1; ++i) {
        x = i;
        y = (n*e-h-b*x-e*x) / (d+e) + 1;
        if(n*e - h - b*x - e*x <= 0) y = 0;
        if(y > n) continue;
        cost = a*x+c*y;
        ans = min(ans, cost);
    }
    cout << ans << endl;
    return 0;
}

