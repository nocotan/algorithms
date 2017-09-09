//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, a, b;
    cin >> n >> a >> b;
    if(n-(a+b)>=0) cout << 0 << endl;
    else cout << abs(n-(a+b)) << endl;
    return 0;
}

