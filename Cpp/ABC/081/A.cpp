#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0; i<3; ++i) ans += s[i]-'0';
    cout << ans << endl;
    return 0;
}

