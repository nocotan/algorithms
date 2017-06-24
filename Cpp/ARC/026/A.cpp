//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n, a, b;
    cin >> n >> a >> b;
    if(n>5)
        cout << 5*b + (n-5)*a << endl;
    else cout << n*b << endl;
    return 0;
}

