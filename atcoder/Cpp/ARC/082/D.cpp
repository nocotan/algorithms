//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];

    int ans = 0;
    for(int i=0; i<n; ++i) {
        if(v[i]==i+1) {
            if(i!=n-1) {
                int tmp = v[i];
                v[i] = v[i+1];
                v[i+1] = tmp;
            }
            else {
                int tmp = v[i];
                v[i] = v[i-1];
                v[i-1] = tmp;
            }
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

