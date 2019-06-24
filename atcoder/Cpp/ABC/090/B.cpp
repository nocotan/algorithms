#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for(int i=a; i<=b; ++i) {
        string s = to_string(i);
        string t = s;
        reverse(t.begin(), t.end());
        if(s==t) ans++;
    }
    cout << ans << endl;
    return 0;
}

