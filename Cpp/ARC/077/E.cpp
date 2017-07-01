//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int n, m;

int g[100001][100001];

auto main() -> signed {
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; ++i) cin >> a[i];
    for(int i=0; i<n; ++i) {
        g[i][i+1] = a[i+1] - a[i];
    }

    return 0;
}

