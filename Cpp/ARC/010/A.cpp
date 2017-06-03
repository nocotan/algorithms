//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int c;
    int ans = -1;
    for(int i=1; i<=m; ++i) {
        if(n<=a) n += b;
        cin >> c;
        n -= c;
        if(n<0) {
            ans = i;
            break;
        }
    }
    if(ans==-1) cout << "complete" << endl;
    else cout << ans << endl;
    return 0;
}

