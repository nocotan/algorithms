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
    UnionFind uf(12);
    uf.unionSet(1, 3);
    uf.unionSet(1, 5);
    uf.unionSet(1, 7);
    uf.unionSet(1, 8);
    uf.unionSet(1, 10);
    uf.unionSet(1, 12);
    uf.unionSet(4, 6);
    uf.unionSet(4, 9);
    uf.unionSet(4, 11);

    int x, y;
    cin >> x >> y;
    if(uf.findSet(x, y)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

