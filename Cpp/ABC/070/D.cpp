//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int d[100000][100000];
signed V;

void warshall_floyd() {
    for (int k=0; k<V; k++) {
        for (int i=0; i<V; i++) {
            for (int j=0; j<V; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        }
    }
}

signed main() {
    cin >> V;
    for(int i=0; i<V; ++i) {
        for(int j=0; j<V; ++j) {
            if(i==j) d[i][j] = 0;
            else d[i][j] = LONG_MAX;
        }
    }
    for(int i=0; i<V-1; ++i) {
        signed a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        d[a][b] = c;
        d[b][a] = c;
    }

    warshall_floyd();

    int q, k;
    cin >> q >> k;
    k--;
    int x, y;
    for(int j=0; j<q; ++j) {
        cin >> x >> y;
        x--;
        y--;
        cout << d[x][k] + d[k][y] << endl;
    }
    return 0;
}

