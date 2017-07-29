//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n, m;
    cin >> n >> m;
    int d[105] = {0};
    int disk = 0;
    for(int i=1; i<=n; ++i) d[i] = i;
    for(int i=0; i<m; ++i) {
        int a;
        cin >> a;
        if(disk==a) continue;
        for(int j=1; j<=n; ++j) if(d[j]==a) d[j] = disk;
        disk = a;
    }
    for(int i=1; i<=n; ++i) cout << d[i] << endl;
    return 0;
}

