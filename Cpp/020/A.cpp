//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int a, b;
    cin >> a >> b;
    int t = abs(a) - abs(b);
    if(t<0) cout << "Ant" << endl;
    else if(t>0) cout << "Bug" << endl;
    else cout << "Draw" << endl;
    return 0;
}

