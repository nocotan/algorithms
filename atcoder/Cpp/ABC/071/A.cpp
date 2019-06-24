//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int x, a, b;
    cin >> x >> a >> b;
    if(abs(x-a)<abs(x-b)) cout << "A" << endl;
    else cout << "B" << endl;
    return 0;
}

