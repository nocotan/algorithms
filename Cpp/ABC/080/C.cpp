#include <bits/stdc++.h>
using namespace std;

#define int long long

int F[100][15];
int P[100][15];

signed main() {
    int n;
    cin >> n;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<10; ++j) cin >> F[i][j];
    }
    for(int i=0; i<n; ++i) {
        for(int j=0; j<11; ++j) cin >> P[i][j];
    }
    int res = -(1<<30);
    for(int b=1; b<(1<<10); ++b) {
        int c = 0;
        for(int i=0; i<n; ++i) {
            int x = 0;
            for(int j=0; j<10; ++j) if((b>>j&1)&&F[i][j]) x++;
            c+=P[i][x];
        }
        res = max(res, c);
    }
    cout <<res << endl;
    return 0;
}

