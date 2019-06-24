//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int a, b, c;
    cin >> a >> b >> c;
    for(int i=1; i<1000000; ++i) {
        if(a*i%b==c) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}

