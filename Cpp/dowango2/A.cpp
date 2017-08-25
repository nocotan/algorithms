//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int ans = 0;
    int n; cin >> n;
    int x = 25;
    while(x<=n) {
        ans++;
        x += 25;
    }
    cout << ans << endl;
    return 0;
}

