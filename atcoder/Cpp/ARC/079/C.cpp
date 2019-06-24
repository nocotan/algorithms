//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> g[200001];
auto main() -> signed {
    int n, m;
    cin >> n >> m;

    for(int i=0; i<m; ++i) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }

    int ans = false;
    for(int i=0; i<g[1].size(); ++i) {
        int t = g[1][i];
        if(find(g[t].begin(), g[t].end(), n)!=g[t].end()) {
            ans = true;
            break;
        }
    }
    if(ans) cout << "POSSIBLE" << endl;
    else cout << "IMPOSSIBLE" << endl;
    return 0;
}

