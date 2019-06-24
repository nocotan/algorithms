#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int x, y, z;
    cin >> x >> y >> z;
    int ans = 0;
    int t = z;
    while(true) {
        if(t+y+z>x) break;
        ans++;
        t += (y+z);
    }
    cout << ans << endl;
    return 0;
}

