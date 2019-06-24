#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, k;
    cin >> n >> k;
    int res = 1;
    for(int i=0; i<n; ++i) {
        if(res*2 < res+k) res *= 2;
        else res = res + k;
    }
    cout << res << endl;
    return 0;
}

