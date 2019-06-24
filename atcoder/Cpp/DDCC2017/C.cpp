#include <bits/stdc++.h>
using namespace std;

#define int long long

int memo[200001];

signed main() {
    int n, c;
    cin >> n >> c;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    sort(v.begin(), v.end());

    int ans = 0;
    int cnt = 0;
    int l = 0;
    int r = n-1;
    while(true) {
        if(cnt==n) break;
        if(l==r) {
            ans++;
            break;
        }
        if(v[l]+v[r]+1<=c) {
            ans++;
            cnt+=2;
            l++;
            r--;
        } else {
            r--;
            ans++;
            cnt++;
        }
    }
    cout << ans << endl;
    return 0;
}

