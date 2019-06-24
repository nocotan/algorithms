//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int x, y;
    cin >> x >> y;
    if(abs(x-y)<=1) cout << "Brown" << endl;
    else cout << "Alice" << endl;
    return 0;
}

