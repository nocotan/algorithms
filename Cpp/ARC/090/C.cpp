#include <bits/stdc++.h>
using namespace std;

int A[2][101];
int n;

int solve(int x, int y, int c) {
    if(x>=n&&y>=2) return c;
    if(y>=2 && x>=n) return max(solve(x+1, y, c+A[y][x+1]), solve(x, y+1, c+A[y+1][x]));
    else if(x>=n) return solve(x, y+1, c+A[y+1][x]);
    else return solve(x+1, y, c+A[y][x+1]);
}

signed main() {
    cin >> n;
    for(int i=0; i<2; ++i) {
        for(int j=0; j<n; ++j) cin >> A[i][j];
    }
    cout << solve(0, 0, A[0][0]) << endl;
    return 0;
}

