#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
 
using namespace std;
using ll = long long;
const ll INF = 1e9;
 
struct UnionFind {
    vector<int> par;
    vector<int> size;
 
    UnionFind(int n) : par(n), size(n, 1) {
        for(int i = 0; i < n; i++) par[i] = i;
    }
 
    int find(int x) {
        if (x == par[x]) return x;
        return par[x] = find(par[x]);
    }
 
    void unite(int x, int y) {
        int px = find(x);
        int py = find(y);
        if (px == py) return;
        if (size[px] < size[py]) swap(px, py);
 
        par[py] = px;
        size[px] += size[py];
    }
 
    bool same(int x, int y) {
        return find(x) == find(y);
    }
};
 
int main() {
    int N;
    string s, t;
    cin >> N >> s >> t;
    UnionFind uf(36);
 
    for (int i = 0; i < N; i++) {
        int spos = isalpha(s[i]) ? s[i] - 'A' + 10 : s[i] - '0';
        int tpos = isalpha(t[i]) ? t[i] - 'A' + 10 : t[i] - '0';
 
        uf.unite(spos, tpos);
    }
 
    ll ans = 1;
    vector<bool> visited(36);
    for (int i = 0; i < N; i++) {
        int spos = isalpha(s[i]) ? s[i] - 'A' + 10 : s[i] - '0';
        int tpos = isalpha(t[i]) ? t[i] - 'A' + 10 : t[i] - '0';
        if (visited[uf.find(spos)] && visited[uf.find(tpos)]) continue;
        visited[uf.find(spos)] = true;
        visited[uf.find(tpos)] = true;
 
        vector<int> sames;
        for (char i = 0; i < 10; i++) {
            if (uf.same(spos, i)) {
                sames.push_back(i);
            }
        }
        if (sames.size() == 0) {
            ans *= (i == 0) ? 9 : 10;
        } else {
            ans *= sames.size();
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
