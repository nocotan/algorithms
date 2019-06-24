//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long


signed main()
{
    int a, k;
    cin >> a >> k;
    int u = 2 * pow(10, 12);
    if(k==0) cout << u-a << endl;
    else {
        int ans = 0;
        while(true) {
            if(a>=u) break;
            a += (1+k*a);
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}

