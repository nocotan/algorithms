#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];

    sort(v.begin(), v.end());
    int t = (n) / 2 - 1;
    for(int i=0; i<n; ++i) {
        if(i>t) cout << v[t] << endl;
        else cout << v[t+1] << endl;
    }
    return 0;
}

