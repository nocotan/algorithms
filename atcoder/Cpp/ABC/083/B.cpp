#include <bits/stdc++.h>
using namespace std;

#define int long long

int sum(int n) {
    string s = to_string(n);
    int res = 0;
    for(int i=0; i<s.size(); ++i) {
        res += s[i]-'0';
    }
    return res;
}

signed main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    int t = 1;
    while(t<=n) {
        int u = sum(t);
        if(a<=u&&u<=b) ans+=t;
        t++;
    }
    cout << ans << endl;
    return 0;
}

