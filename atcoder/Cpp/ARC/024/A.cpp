//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> u(m);
    set<int> st;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        v[i] = a;
        st.insert(a);
    }
    for(int i=0; i<m; ++i) cin >> u[i];

    int ans = 0;
    for(auto e=st.begin(); e!=st.end(); ++e) {
        ans += min(count(v.begin(), v.end(), *e), count(u.begin(), u.end(), *e));
    }
    cout << ans << endl;
    return 0;
}

