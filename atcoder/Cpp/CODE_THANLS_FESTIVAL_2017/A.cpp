#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int ans = 0;
    for(int i=0; i<8; ++i) {
        int a;
        cin >> a;
        ans = max(ans, a);
    }
    cout << ans << endl;
    return 0;
}

