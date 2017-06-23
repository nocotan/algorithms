//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    string r, g, b;
    cin >> r >> g >> b;
    string s = r + g + b;
    int n = stoi(s);
    if(n%4==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

