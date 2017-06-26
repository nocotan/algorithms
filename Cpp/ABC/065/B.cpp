//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    int c = 0;
    bool ans = false;
    int cur = 1;
    while(true) {
        if(c>n) break;
        cur = v[cur-1];
        c++;
        if(cur==2) {
            ans = true;
            break;
        }
    }
    if(ans==true) cout << c << endl;
    else cout << -1 << endl;
    return 0;
}

