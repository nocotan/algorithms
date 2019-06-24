#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define int long long
#define mod 1000000007

vector<int> G[101];
int dp[101] = {0};
int d[101];

void bfs(int s, int t) {
    queue<int> que;
    que.push(s);
    d[s] = 0;
    dp[s] = 1;
    while(!que.empty()) {
        int u = que.front();
        que.pop();
        if(u==t) break;
        for(int i=0; i<G[u].size(); ++i) {
            int v = G[u][i];
            if(d[v]>d[u]+1) {
                d[v] = d[u]+1;
                (dp[v]+=dp[u])%=mod;
                que.push(v);
            } else if(d[v]==d[u]+1) {
                (dp[v]+=dp[u])%=mod;
            }
        }
    }
}

auto main() -> signed {
    int n, a, b;
    cin >> n >> a >> b;
    a--;
    b--;

    int m;
    cin >> m;
    for(int i=0; i<m; ++i) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    for(int i=0; i<101; ++i) d[i] = 1e+9;

    bfs(a, b);
    cout << dp[b] << endl;
}
