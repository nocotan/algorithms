//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string s;
    cin >> s;
    string t = "CODEFESTIVAL2016";
    int ans = 0;
    for(int i=0; i<t.size(); ++i) if(s[i]!=t[i]) ans++;
    cout << ans << endl;
    return 0;
}

