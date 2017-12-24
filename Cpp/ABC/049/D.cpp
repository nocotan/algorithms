#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> G[200001];
vector<int> rG[200001];
vector<int> vs;
bool used[200001];
int cmp[200001];

class SCC {
    private:
        int V;
        int E;

        auto dfs(int v) -> void {
            used[v] = true;
            for (int i = 0; i < G[v].size(); ++i)
                if (!used[G[v][i]])
                    dfs(G[v][i]);

            vs.push_back(v);
        }

        auto rdfs(int v, int k) -> void{
            used[v] = true;
            cmp[v] = k;
            for (int i = 0; i < rG[v].size(); i++)
                if (!used[rG[v][i]])
                    rdfs(rG[v][i], k);
        }

    public:
        SCC(int V, int E)
            : V(V), E(E) { }

        auto scc() -> int {
            fill(used, used + V, false);
            vs.clear();

            for (int v = 0; v < V; v++) {
                if (!used[v]) dfs(v);
            }

            fill(used, used + V, false);
            int k = 0;

            for (int i = vs.size() - 1; i >= 0; i--)
                if (!used[vs[i]])
                    rdfs(vs[i], k++);

            return k;
        }

        auto add_edge(int s, int t) {
            G[s].push_back(t);
            rG[t].push_back(s);
        }

        auto get_cmp(int a) -> int {
            return cmp[a];
        }

        auto is_union_cmp(int a, int b) -> bool {
            return cmp[a] == cmp[b];
        }
};

int g[200001][200001];

signed main() {
    int n, k, l;
    cin >> n >> k >> l;
    set<pair<int, int>> st;

    for(int i=0; i<k; ++i) {
        int p, q;
        cin >> p >> q;
        --p;--q;
        g[p][q]++;
        g[q][p]++;
        st.insert(make_pair(max(p, q), min(p, q)));
    }
    for(int i=0; i<l; ++i) {
        int r, s;
        --r;--s;
        cin >> r >> s;
        g[r][s]++;
        g[s][r]++;
        st.insert(make_pair(max(s, r), min(s, r)));
    }

    int E = 0;
    for(auto iter=st.begin(); iter!=st.end(); ++iter) {
        if(g[iter->first][iter->second]==2) {
            ++E;
        }
    }

    SCC scc(n, E);
    for(auto iter=st.begin(); iter!=st.end(); ++iter) {
        if(g[iter->first][iter->second]==2) {
            scc.add_edge(iter->first, iter->second);
            scc.add_edge(iter->second, iter->first);
            ++E;
        }
    }

    int K = scc.scc();
    std::map<int, int> mp;
    for(int i=0; i<n; ++i) {
        mp[scc.get_cmp(i)]++;
    }

    for(int i=0; i<n; ++i) {
        cout << mp[scc.get_cmp(i)] << endl;
    }
    return 0;
}

