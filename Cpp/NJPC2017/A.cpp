//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int l;
    string s;
    cin >> l >> s;
    if(s.size()>l) cout << s.substr(0,l) << endl;
    else cout << s << endl;
    return 0;
}

