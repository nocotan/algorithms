//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int x, y;
    cin >> x >> y;
    int c, ans=LONG_MAX;
    for(int i=0; i<4; ++i) {
        if(i==0) c=0;
        else if(i==3) c=2;
        else c=1;
        if(y>=x) ans = min(ans, y-x+c);
        x = -x;
        if(i==1)y=-y;;
    }
    cout << ans << endl;
    return 0;
}

