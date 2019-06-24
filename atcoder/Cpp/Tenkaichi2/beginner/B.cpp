#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    int a, b;
    int ans = -1;
    int mx = -1;
    while(n--) {
        cin >> a >> b;
        if(a>mx) {
            mx = a;
            ans = a+b;
        }
    }
    cout << ans << endl;
    return 0;
}

