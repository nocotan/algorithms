//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int f(int n) {
    return floor((n*n+4.0)/8.0);
}

signed main() {
    cout << f(f(f(20))) << endl;
    return 0;
}

