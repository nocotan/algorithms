//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, p;
    cin >> n >> p;
    int cnt[2] = {0};
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        cnt[a%2]++;
    }
    if(cnt[1]) cout << (1ll<<(n-1)) << endl;
    else cout << (p?0:1ll<<n) << endl;
    return 0;
}

