//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int field[100001][100001];
int row[100001];
int col[100001];

auto main() -> signed {
    int r, c, k;
    cin >> r >> c >> k;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i) {
        int r1, c1;
        cin >> r1 >> c1;
        field[r][c]++;
        row[r]++;
        col[c]++;
    }

    int ans = 0;
    for(int i=0; i<max(r, c); ++i) {
        if(row[r]+col[c]==k) ans++;
    }
    return 0;
}

