//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int memo[10001];
int target[10001];

auto main() -> signed {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    for(int i=0; i<n; ++i) target[s[i]]++;

    int ans = 0;
    while(true) {
        ans++;
        if(ans==51) break;
        for(int i=0; i<m; ++i) {
            memo[t[i]]++;
        }
        int f = 0;
        for(int i=0; i<n; ++i) {
            if(memo[s[i]]<target[s[i]]) f++;
        }
        if(f==0) break;
    }
    if(ans==51) ans = -1;
    cout << ans << endl;
    return 0;
}

