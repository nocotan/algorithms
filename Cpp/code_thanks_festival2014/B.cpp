//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = a;
    if(ans<=1||b==0||b==1) ans += b;
    else ans *= b;
    if(ans<=1||c==0||c==1) ans += c;
    else ans *= c;
    cout << ans << endl;
    return 0;
}

