#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;

    int t[100001], x[100001], y[100001];
    t[0] = x[0] = y[0] = 0;
    for(int i=0; i<n; ++i) {
        cin >> t[i+1] >> x[i+1] >> y[i+1];
    }

    bool ans = true;
    for(int i=0; i<n; ++i) {
        int dt = t[i+1] - t[i];
        int dl = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
        if(dl > dt) ans = false;
        if(dl%2!=dt%2) ans = false;
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

