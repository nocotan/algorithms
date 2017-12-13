#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    int ans = 0;
    while(true) {
        int f = 0;
        for(int i=0; i<n; ++i) {
            if(v[i]%2!=0) {
                f++;
                break;
            }
        }
        if(f) break;
        for(int i=0; i<n; ++i) v[i] /= 2;
        ans++;
    }
    cout << ans << endl;
    return 0;
}

