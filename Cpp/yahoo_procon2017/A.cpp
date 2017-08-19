//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string yahoo = "yahoo";
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    sort(yahoo.begin(), yahoo.end());
    if(s==yahoo) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

