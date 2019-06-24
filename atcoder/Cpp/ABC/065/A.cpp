//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int x, a, b;
    cin >> x >> a >> b;
    int t = -a + b;
    if(t<=0) cout << "delicious" << endl;
    else if(t<=x) cout << "safe" << endl;
    else cout << "dangerous" << endl;
    return 0;
}

