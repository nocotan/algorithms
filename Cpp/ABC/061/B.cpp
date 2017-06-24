//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > v(n);
    for(int i=0; i<m; ++i) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0; i<n; ++i) cout <<v[i].size() << endl;
    return 0;
}

