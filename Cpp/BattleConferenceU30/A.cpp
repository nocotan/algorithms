//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, k;
    cin >> n >> k;
    int t = 0;
    int ans = -1;
    for(int i=0; i<k; ++i) {
        int a;
        cin >> a;
        t += a;
        if(t==n) ans = n;
        else if(t>n) t = (n - (t - n));
    }

    if(ans==-1) ans = t;
    cout << ans << endl;
    return 0;
}

