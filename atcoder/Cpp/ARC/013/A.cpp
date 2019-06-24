//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n, m, l, p, q, r;
    cin >> n >> m >> l >> p >> q >> r;
    vector<int> pack;
    pack.push_back(n);
    pack.push_back(m);
    pack.push_back(l);
    sort(pack.begin(), pack.end());
    int ans = -1;
    do {
        ans = max(ans, (pack[0]/p)*(pack[1]/q)*(pack[2]/r));
    } while(next_permutation(pack.begin(), pack.end()));
    cout << ans << endl;
    return 0;
}

