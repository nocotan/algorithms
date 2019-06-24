//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

template<typename T>
vector<int> sorted_idx(const vector<T> &v) {
    vector<int> res(v.size());
    iota(res.begin(), res.end(), 0);
    sort(res.begin(), res.end(), [&v](int i1, int i2){return v[i1]<v[i2];});
    return res;
}

signed main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n), b(n);
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
        cin >> a[i] >> b[i];
        v[i] = a[i] - b[i];
    }
    if(accumulate(b.begin(), b.end(), 0) > t) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> u = sorted_idx(v);

    int memo = accumulate(a.begin(), a.end(), 0);
    int ans = 0;
    int idx = n-1;
    while(true) {
        if(memo <= t) break;
        memo -= v[u[idx]];
        idx--;
        ans++;
    }
    cout << ans << endl;
    return 0;
}

