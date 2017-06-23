//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int n, m;
int d[301][301];

auto wf() -> void {
    for(int k=0; k<n; ++k)
        for(int i=0; i<n; ++i)
            for(int j=0; j<n; ++j)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

auto main() -> signed {
    cin >> n >> m;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            if(i == j) d[i][j] = 0;
            else d[i][j] = 1e+9;
        }
    }

    int a, b, t;
    for(int i=0; i<m; ++i) {
        cin >> a >> b >> t;
        a--;
        b--;
        d[a][b] = t;
        d[b][a] = t;
    }
    wf();
    int ans = 1e+9;
    for(int i=0; i<n; ++i) {
        int max_t = -1;
        for(int j=0; j<n; ++j) {
            if(i==j) continue;
            max_t = max(max_t, d[i][j]);
        }
        ans = min(ans, max_t);
    }
    cout << ans << endl;
    return 0;
}

