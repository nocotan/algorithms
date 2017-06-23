//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    sort(v.begin(), v.end());
    vector<int> u;
    for(int i=0; i<v.size(); ++i) {
        int tmp = 0;
        for(int j=i; j<v.size(); ++j) {
            if(v[i]==v[j]) tmp += v[i];
        }
        u.push_back(tmp);
    }
    int ans = 0;
    for(int i=0; i<u.size(); ++i) {
        ans += u[i] / (a+b);
    }
    cout << ans << endl;
    return 0;
}

