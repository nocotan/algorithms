//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int A[301][301];

signed main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=n; ++j) {
            cin >> A[i][j];
        }
    }
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=n; ++j) {
            for(int k=1; k<=n; ++k) {
                if(k!=i&&k!=j) {
                    if(A[i][k]+A[k][j]<A[i][j]) {
                        cout << -1 << endl;
                        return 0;
                    }
                }
            }
        }
    }
    int ans = 0;
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=n; ++j) {
            bool p = true;
            for(int k=1; k<=n; ++k) {
                if(k!=i && k!=j) {
                    if(A[i][k]+A[k][j]==A[i][j]) p = false;
                }
            }
            if(p) ans += A[i][j];
        }
    }
    cout << ans/2 << endl;
    return 0;
}

