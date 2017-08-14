//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, c;
    cin >> n >> c;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];

    int ans = 1e+9;
    for(int i=1; i<=10; ++i) {
        for(int j=1; j<=10; ++j) {
            if(i==j) continue;
            int tmp = 0;
            for(int k=0; k<n; ++k) {
                if(k%2==0&&v[k]!=i) tmp++;
                if(k%2!=0&&v[k]!=j) tmp++;
            }
            ans = min(ans, tmp);
        }
    }
    cout << ans*c << endl;
    return 0;
}

