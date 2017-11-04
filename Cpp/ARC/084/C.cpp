#include <bits/stdc++.h>
using namespace std;
#define int long long

int G[300001];

signed main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for(int i=0; i<n; ++i) cin >> a[i];
    for(int i=0; i<n; ++i) cin >> b[i];
    for(int i=0; i<n; ++i) cin >> c[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int ans = 0;
    for(int i=0; i<n; ++i) {
        int v = b[i];
        auto it1 = lower_bound(a.begin(), a.end(), v);
        int idx1 = distance(a.begin(), it1);
        auto it2 = upper_bound(c.begin(), c.end(), v);
        int idx2 = distance(c.begin(), it2);

        ans += (idx1 * (n-idx2));
    }

    cout << ans << endl;
    return 0;
}

