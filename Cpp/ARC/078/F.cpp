//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

#define MAX_V 15
#define INF 1e+9

int cost[MAX_V][MAX_V];
int mincost[MAX_V];
bool used[MAX_V];
int V;

int prim() {
    for(int i=0; i<V; ++i) {
        mincost[i] = INF;
        used[i] = false;
    }
    mincost[0] = 0;
    int res = 0;

    while(true) {
        int v = -1;
        for(int u=0; u<V; ++u) {
            if(!used[u] && (v==-1 || mincost[u] < mincost[v])) v = u;
        }

        if (v == -1) break;
        used[v] = true;
        res += mincost[v];

        for(int u=0; u<V; ++u) {
            mincost[u] = min(mincost[u], cost[v][u]);
        }
    }

    return res;
}

auto main() -> signed {
    cin >> V;
    int m;
    cin >> m;
    for(int i=0; i<m; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        cost[a][b] = c;
        cost[b][a] = c;
    }

    int ans = prim();
    cout << ans << endl;
    return 0;
}

