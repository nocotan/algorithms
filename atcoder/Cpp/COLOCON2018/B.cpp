#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;

    int ans = 0;
    for(int i=0; i<n; ++i) {
        int t;
        cin >> t;
        if(s[i]=='1') ans += min(x, t);
        else ans += t;
    }
    cout << ans << endl;
    return 0;
}

