#include <bits/stdc++.h>
using namespace std;

int memo[200000];
signed main() {
    int n, k;
    cin >> n >> k;
    set<int> v;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        v.insert(a);
        memo[a]++;
    }
    vector<int> b;
    for(auto i : v) b.push_back(memo[i]);
    sort(b.begin(), b.end());
    int t = max((int)v.size() - k, 0);
    int ans = 0;
    for(int i=0; i<t; ++i) ans += b[i];
    cout << ans << endl;
    return 0;
}

