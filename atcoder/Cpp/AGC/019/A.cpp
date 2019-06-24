//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int q, h, s, d, n;
    cin >> q >> h >> s >> d >> n;
    if(q * 2 < h) h = q * 2;
    if(h * 2 < s) s = h * 2;
    if(s * 2 < d) d = s * 2;
    int ans = 0;
    if(n%2==1) ans = d * (n / 2) + s;
    else ans = d * (n / 2);
    cout << ans << endl;
    return 0;
}

