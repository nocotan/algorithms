//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int d[210][210];

int n, m, r;
void wf() {
    for(int k=1; k<n; ++k) {
        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
            }
        }
    }
}

signed main() {
    cin >> n >> m >> r;
    for(int i=0; i<201; ++i) {
        for(int j=0; j<201; ++j) {
            if(i==j) d[i][j] = 0;
            else d[i][j] = (1<<30);
        }
    }
    vector<int> v(r);
    for(int i=0; i<r; ++i) {
        cin >> v[i];
        v[i]--;
    }
    sort(v.begin(), v.end());

    for(int i=0; i<m; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        d[a][b] = c;
        d[b][a] = c;
    }
    wf();

    int ans = (1<<30);
    do {
        int tmp = 0;
        for(int i=1; i<v.size(); ++i) tmp += d[v[i-1]][v[i]];
        ans = min(ans, tmp);
    } while(next_permutation(v.begin(), v.end()));
    cout << ans << endl;
    return 0;
}

