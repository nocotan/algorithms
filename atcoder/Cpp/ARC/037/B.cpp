//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> G[101];
int D[101][101];
int memo[101];

signed main() {
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
        D[a][b] = 1;
        D[b][a] = 1;
    }

    vector<vector<int>> v;
    for(int i=1; i<=n; ++i) {
        if(memo[i]!=0) continue;
        queue<int> que;
        que.push(i);
        vector<int> tmp;
        while(!que.empty()) {
            int u = que.front();
            que.pop();
            if(memo[u]!=0) continue;
            tmp.push_back(u);
            memo[u] = i;
            for(int j=0; j<G[u].size(); ++j) {
                que.push(G[u][j]);
            }
        }
        v.push_back(tmp);
    }

    int ans = 0;
    for(int i=0; i<v.size(); ++i) {
        vector<int> x = v[i];
        int e = 0;
        for(int j=0; j<x.size(); ++j) {
            for(int k=j+1; k<x.size(); ++k) {
                if(D[x[j]][x[k]]) e++;
            }
        }
        if(e==x.size()-1) ans++;
    }
    cout << ans << endl;
    return 0;
}

