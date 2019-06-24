#include <bits/stdc++.h>
using namespace std;
#define int long long

int memo[100001];

signed main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];

    sort(v.begin(), v.end());
    for(int i=0; i<n; ++i) {
        int x = v[i];
        memo[x]++;
        memo[x+1]++;
        memo[x-1]++;
    }
    int ans = -1;
    for(int i=0; i<100001; ++i) ans = max(ans, memo[i]);
    cout << ans << endl;
    return 0;
}

