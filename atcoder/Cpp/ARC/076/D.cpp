//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int cost[100000][100000];
int mincost[100000];
bool used[100000];
int V;

auto prim() -> int {
    for(int i=0; i<V; ++i) {
        mincost[i] = 1e+9;
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

// ソート前インデックスのベクタ
template<typename T>
vector<int> sorted_idx(const vector<T> &v) {
    vector<int> res(v.size());
    iota(res.begin(), res.end(), 0);
    sort(res.begin(), res.end(), [&v](int i1, int i2){return v[i1]<v[i2];});
    return res;
}

auto main() -> signed {
    cin >> V;
    vector<pair<int, int> > v;
    vector<int> u;
    vector<int> t;
    for(int i=0; i<V; ++i) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }


    for(int i=0; i<v.size()-1; ++i) {
        auto p = v[i];
        for(int j=i+1; j<v.size(); ++j) {
            auto p1 = v[j];
            int a = min(abs(p.first-p1.first), abs(p.second-p1.second));
            cost[j][i] = a;
            cost[i][j] = a;
        }
    }

    int ans = prim();
    cout << ans << endl;

    return 0;
}

