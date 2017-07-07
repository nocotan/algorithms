//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

// Union Find
struct UnionFind {
    vector<int> data;
    UnionFind(int size) : data(size, -1) { }
    bool unionSet(int x, int y) {
        x = root(x);
        y = root(y);

        if (x != y) {
            if (data[y] < data[x]) swap(x, y);
            data[x] += data[y];
            data[y] = x;
        }
        return x != y;
    }
    bool findSet(int x, int y) { return root(x) == root(y); }
    int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
    int size(int x) { return -data[root(x)]; }
};

auto main() -> signed {
    int n, m;
    cin >> n >> m;
    UnionFind uf(n);
    for(int i=0; i<m; ++i) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        uf.unionSet(a, b);
    }

    int ans = 0;
    for(int i=1; i<n; ++i) {
        if(!uf.findSet(0, i)) {
            uf.unionSet(0, i);
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

