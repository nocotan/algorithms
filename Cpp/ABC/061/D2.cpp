#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;
using i64 = long long;

struct edge { int to; i64 cost; };

bool visit(const vector<vector<edge>> &G, int v, vector<int> &order, vector<int> &color) {
  color[v] = 1;
  for(edge e : G[v]) {
    if(color[e.to] == 2) { continue; }
    if(color[e.to] == 1) { return false; }
    if(!visit(G, e.to, order, color)) { return false; }
  }
  order.push_back(v);
  color[v] = 2;
  return true;
}

bool topological_sort(const vector<vector<edge>> &G, vector<int> &order) {
  int n = G.size();
  vector<int> color(n);
  for(int u=0; u<n; ++u) {
    if(!color[u] && !visit(G, u, order, color)) { return false; }
  }
  reverse(begin(order), end(order));
  return true;
}

int main(void) {
  int n, m; scanf("%d%d", &n, &m);
  vector<vector<edge>> fG(n, vector<edge>()),
                       rG(n, vector<edge>());
  for(int i=0; i<m; ++i) {
    int a, b; i64 c; scanf("%d%d%lld", &a, &b, &c);
    a--;
    b--;
    fG[a].push_back(edge({b, c}));
    rG[b].push_back(edge({a, c}));
  }
  vector<int> order;
  bool ok = topological_sort(fG, order);
  assert(ok);

  vector<i64> dp0(n), dp1(n);
  for(int i=0; i<n; ++i) {
    for(edge &e : fG[order[i]]) {
      dp0[e.to] = max(dp0[e.to], dp0[order[i]] + e.cost);
    }
    for(edge &e : rG[order[n-i-1]]) {
      dp1[e.to] = min(dp1[e.to], dp1[order[n-i-1]] - e.cost);
    }
  }

  i64 days = dp0[n-1];
    cout << days << endl;
  return 0;
}

