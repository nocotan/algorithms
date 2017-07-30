//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    if(n==1) {
        cout << 1 << endl;
        return 0;
    }
    int ans = 2;
    int c = 2;
    while(true) {
        if(pow(2,c)>n) break;
        ans = pow(2,c);
        c++;
    }
    cout << ans << endl;
    return 0;
}

