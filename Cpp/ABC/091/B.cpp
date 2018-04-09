#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0; i<n; ++i) {
        cin >> s[i];
    }
    int m;
    cin >> m;
    vector<string> t(m);
    for(int i=0; i<m; ++i) {
        cin >> t[i];
    }

    int ans = 0;
    for(int i=0; i<n; ++i) {
        string u = s[i];
        int tmp = count(s.begin(), s.end(), u);
        for(int j=0; j<m; ++j) {
            if(u==t[j]) tmp--;
        }
        ans = max(tmp, ans);
    }
    cout << ans << endl;
    return 0;
}

