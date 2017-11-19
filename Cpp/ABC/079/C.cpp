#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> v;
vector<string> u;
void solve(int i, int n, string ans) {
    if(i==4) {
        if(n==7) {
            u.push_back(ans);
        }
        return;
    }
    for(int j=0; j<2; ++j) {
        solve(i+1, n+v[i], ans+"+");
        solve(i+1, n-v[i], ans+"-");
    }
}

signed main() {
    string s;
    cin >> s;
    for(int i=0; i<s.size(); ++i) v.push_back(s[i]-'0');
    solve(1, v[0], "");
    string ans = u[0];
    cout << v[0] << ans[0] << v[1] << ans[1] << v[2] << ans[2] << v[3] << "=7" << endl;
    return 0;
}

