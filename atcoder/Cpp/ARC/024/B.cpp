//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    int ans = -1;
    int l = 1;
    int c = v[0];
    for(int i=1; i<2*n; ++i) {
        if(c==v[i%n]) l++;
        else {
            l = 1;
            c = v[i%n];
        }
        ans = max(ans, l);
    }
    cout << (ans<n?(ans-1)/2+1 : -1) << endl;
    return 0;
}

