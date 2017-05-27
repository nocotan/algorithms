//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n, a, b;
    cin >> n >> a >> b;
    int mx = a+(n-1)*b;
    int mn = (n-1)*a+b;
    if(mx-mn+1<=0) cout << 0 << endl;
    else
        cout << mx - mn+1 << endl;
    return 0;
}

