//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    vector<int> t(n);
    for(int i=0; i<n; ++i) cin >> t[i];

    sort(t.begin(), t.end());
    if(n==1) cout << t[0] << endl;
    else if(n==2) cout << t[1] << endl;
    else if(n==3) cout << max(t[0]+t[1], t[2]) << endl;
    else {
        int ans = 1e+9;
        do {
            ans = min(ans, max(t[0]+t[1], t[2]+t[3]));
            ans = min(ans, max(t[0], t[1]+t[2]+t[3]));
        } while(next_permutation(t.begin(), t.end()));
        cout << ans << endl;
    }
    return 0;
}

