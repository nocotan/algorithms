//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> g[301];
int d[301][301];
int sd[301];
int n, m;

void wf() {
    for(int k=0; k<n; ++k) {
        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
            }
        }
    }
}

auto main() -> signed {
    cin >> n >> m;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) d[i][j] = 1e+9;
    }
    for(int i=0; i<m; ++i) {
        int u, v, l;
        cin >> u >> v >> l;
        u--;
        v--;
        if(u==0||v==0) {
            g[u].push_back(v);
            g[v].push_back(u);
            if(u==0) sd[v] = l;
            else sd[u] = l;
        } else {
            d[u][v] = l;
            d[v][u] = l;
        }
    }

    wf();
    int ans = 1e+9;
    for(int i=0; i<g[0].size(); ++i) {
        for(int j=0; j<g[0].size(); ++j) {
            if(i==j) continue;
            ans = min(d[g[0][i]][g[0][j]]+sd[g[0][i]]+sd[g[0][j]], ans);
        }
    }
    if(ans>=1e+9) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}

