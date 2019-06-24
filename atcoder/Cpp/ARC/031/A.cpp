//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    if(s==t) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

