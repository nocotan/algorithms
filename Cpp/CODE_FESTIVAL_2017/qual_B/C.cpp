#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> G[100001];

signed main() {
    int n, m;
    cin >> n >> m;
    int a, b;
    for(int i=0; i<m; ++i) {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    int ans = 0;
    for(int i=1; i<=n; ++i) {
        for(int j=0; j<G[i].size(); ++j) {
            int u = G[i][j];
            for(int k=0; k<G[u].size(); ++k) {
                int u2 = G[u][k];
                for(int l=0; l<G[u2].size(); ++l) {
                    int u3 = G[u2][l];
                    if(find(G[i].begin(), G[i].end(), u3)==G[i].end()) {
                        G[i].push_back(u3);
                        G[u3].push_back(i);
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}

