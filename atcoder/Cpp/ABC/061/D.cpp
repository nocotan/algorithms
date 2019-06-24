//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

const int inf = LONG_MAX;

signed main() {
    int n, m;
    cin >> n >> m;
    int a[2000], b[2000], c[2000];
    for(int i=0; i<m; ++i) {
        cin >> a[i] >> b[i] >> c[i];
        c[i] = -c[i];
    }

    int dist[1000];
    for(int i=0; i<n; ++i) dist[i] = inf;
    dist[0] = 0;
    for(int j=0; j<n-1; ++j) {
        for(int i=0; i<m; ++i) {
            if(dist[a[i]-1] == inf) continue;
            if(dist[b[i]-1] > dist[a[i]-1] + c[i]) dist[b[i]-1] = dist[a[i]-1] + c[i];
        }
    }
    int ans = dist[n-1];

    bool negative[1000];
    for(int i=0; i<n; ++i) negative[i] = false;
    for(int j=0; j<n; ++j) {
        for(int i=0; i<m; ++i) {
            if(dist[a[i]-1] == inf) continue;
            if(dist[b[i]-1] > dist[a[i]-1] + c[i]) {
                dist[b[i]-1] = dist[a[i]-1] + c[i];
                negative[b[i]-1] = true;
            }
            if(negative[a[i]-1] == true) negative[b[i]-1] = true;
        }
    }

    if(negative[n-1]) cout << "inf" << endl;
    else cout << -ans << endl;
    return 0;
}

