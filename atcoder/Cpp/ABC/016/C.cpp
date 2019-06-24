//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> g[11];

auto main() -> signed {
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; ++i) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i=0; i<n; ++i) {
        int ans = 0;
        int memo[11] = {0};
        for(int j=0; j<g[i].size(); ++j) memo[g[i][j]]++;
        for(auto e : g[i]) {
            if(e==i) continue;
            for(int k=0; k<g[e].size(); ++k) {
                if(g[e][k]==i || e==g[e][k]) continue;
                if(memo[g[e][k]]!=0) continue;
                memo[g[e][k]]++;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

