#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    int t = 0;
    for(int i=1; i<=n; ++i) {
        t += i;
        if(t>=n) {
            int u = t - n;
            for(int j=1; j<=i; ++j) {
                if(j!=u) cout << j << endl;
            }
            return 0;
        }
    }
    return 0;
}

