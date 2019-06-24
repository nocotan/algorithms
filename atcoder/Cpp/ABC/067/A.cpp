//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int a, b;
    cin >> a >> b;
    if(a%3==0||b%3==0||(a+b)%3==0) cout << "Possible" << endl;
    else cout << "Impossible" << endl;
    return 0;
}

