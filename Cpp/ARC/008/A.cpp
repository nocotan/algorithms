//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    int ans = 0;
    while(true) {
        if(n<=0) break;
        if(n >= 7) {
            n -= 10;
            ans += 100;
        }
        else {
            ans += 15 * n;
            n = 0;
        }
    }
    cout << ans << endl;
    return 0;
}

