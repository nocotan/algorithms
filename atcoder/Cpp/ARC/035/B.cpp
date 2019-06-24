//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long
int mod = 1000000007;

int memo[10001];

int frac(int n) {
    if(n==0) return 1;
    int res = 1;
    while(n!=1) {
        res *= n;
        res %= mod;
        n--;
    }
    return res;
}

signed main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
        cin >> v[i];
        memo[v[i]]++;
    }
    sort(v.begin(), v.end());

    int ans = 0;
    int cur_time = 0;
    for(int i=0; i<n; ++i) {
        ans += cur_time+v[i];
        cur_time += v[i];
    }
    int cnt = 1;
    for(int i=0; i<10001; ++i) cnt = (cnt*frac(memo[i]))%mod;
    cout << ans << endl << cnt << endl;
    return 0;
}

