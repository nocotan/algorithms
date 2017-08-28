//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    while(true) {
        if(a%2!=0||b%2!=0||c%2!=0) break;
        if(ans==1000000) {
            cout << -1 << endl;
            return 0;
        }
        ans++;
        int tmp_a = a/2;
        int tmp_b = b/2;
        int tmp_c = c/2;
        a = 0;
        b = 0;
        c = 0;
        a += tmp_b+tmp_c;
        b += tmp_a+tmp_c;
        c += tmp_a+tmp_b;
    }
    cout << ans << endl;
    return 0;
}

