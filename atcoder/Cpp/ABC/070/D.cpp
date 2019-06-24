//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int V;

#define INF LONG_MAX
#define MAX_V 100000

using P = pair<int, int>;


struct edge {
        int to;
            int cost;
};

vector<edge> G[MAX_V];
int d[MAX_V];

void dijkstra(int s) {
    priority_queue<P, vector<P>, greater<P> > que;
    fill(d, d+V, INF);
    d[s] = 0;
    que.push(P(0, s));

    while (!que.empty()) {
        P p = que.top();
        que.pop();
        int v = p.second;
        if (d[v] < p.first) continue;

        for (int i=0; i<G[v].size(); ++i) {
            edge e = G[v][i];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}

signed main() {
    cin >> V;
    for(int i=0; i<V-1; ++i) {
        signed a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        edge e = {b, c};
        G[a].push_back(e);
        e = {a, c};
        G[b].push_back(e);
    }

    int q, k;
    cin >> q >> k;
    k--;
    dijkstra(k);
    int x, y;
    for(int j=0; j<q; ++j) {
        cin >> x >> y;
        x--;
        y--;
        cout << d[x] +d[y] << endl;
    }
    return 0;
}

