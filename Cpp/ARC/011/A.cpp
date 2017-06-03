//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int m, n, N;
    cin >> m >> n >> N;
    int ans = N;
    while(true) {
        if(N<m) break;
        ans += (N/m)*n;
        N = N%m + (N/m)*n;
    }
    cout << ans << endl;
    return 0;
}

