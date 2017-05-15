//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define int long long

using Weight = int;
using Flow = int;
struct Edge {
    int src, dst;
    Weight weight;
    Flow cap;
    Edge() : src(0), dst(0), weight(0) {}
    Edge(int s, int d, Weight w) : src(s), dst(d), weight(w) {}
};
using Edges = std::vector<Edge>;
using Graph = std::vector<Edges>;
using Array = std::vector<Weight>;
using Matrix = std::vector<Array>;
 
void add_edge(Graph &g, int a, int b, Weight w = 1) {
    g[a].emplace_back(a, b, w);
    g[b].emplace_back(b, a, w);
}
void add_arc(Graph &g, int a, int b, Weight w = 1) { g[a].emplace_back(a, b, w); }
 
std::vector<int> tsort(const Graph &g) {
    int n = g.size();
    enum { YET, VISITED, DONE };
    std::vector<int> res, flg(n, YET);
    static const std::function<bool(int)> dfs = [&](int v) {
        flg[v] = VISITED;
        for (auto &e : g[v]) {
            int w = e.dst;
            if(flg[w] == DONE) continue;
            if(flg[w] == VISITED || !dfs(e.dst)) return false;
        }
        flg[v] = DONE;
        res.push_back(v);
        return true;
    };
    for (int i = 0; i < n; ++i)
        if (flg[i] == YET && !dfs(i)) return {};
    std::reverse(res.begin(), res.end());
    return res;
}
int W[1001][1001];
struct edge { int to; int cost; };
vector<edge> G[10001];
signed main()
{
    int n, m;
    cin >> n >> m;
    Graph g(n);
    vector<edge> E;
    for(int i=0; i<m; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        g[a].emplace_back(a,b,0);
        W[a][b] = c;
        edge e;
        e.to = b;
        e.cost = c;
        G[a].push_back(e);
    }
    vector<int> ord = tsort(g);
    if(ord.size()==0) cout << "inf" << endl;
    else {
        vector<int> dp0(n), dp1(n);
		for(int i=0; i<n; ++i) {
			for(edge &e : G[ord[i]]) {
			  dp0[e.to] = min(dp0[e.to], dp0[ord[i]] + e.cost);
			}
			for(edge &e : G[ord[n-i-1]]) {
			  dp1[e.to] = max(dp1[e.to], dp1[ord[n-i-1]] - e.cost);
			}
		  }
        int ans = dp1[n-1];
        cout << ans << endl;
        }
    return 0;
}

