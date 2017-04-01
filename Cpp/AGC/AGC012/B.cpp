//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int G[100001] = {0};
vector<int> dp[100001][11];

signed main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > v(n+1);
    for(int i=0; i<m; ++i) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;
    for(int i=0; i<q; ++i) {
        int vq, d, c;
        cin >> vq >> d >> c;
        G[vq] = c;

        if(dp[vq][d].size()!=0) {
            for(int j=0; j<dp[vq][d].size(); ++j) G[dp[vq][d][j]] = c;
            continue;
        }

        // bfs
        queue<pair<int, int> > que;
        que.push(make_pair(vq, 0));
        int ans = 0;
        int memo[n+1] = {0};
        while(!que.empty()) {
            pair<int, int> p = que.front();
            que.pop();
            vector<int> target = v[p.first];
            if(p.second>=d) break;
            if(memo[p.first]==1) continue;
            for(int i=0; i<target.size(); ++i) {
                if(memo[target[i]]==1) continue;
                que.push(make_pair(target[i], p.second+1));
                G[target[i]] = c;
            }
            memo[p.first] = 1;
        }
    }
    for(int i=1; i<=n; ++i) cout << G[i] << endl;
    return 0;
}

