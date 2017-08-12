//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = min(b,d) - max(a, c);
    if(ans<0) ans = 0;
    cout << ans << endl;
    return 0;
}

