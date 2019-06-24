#include <bits/stdc++.h>
using namespace std;

#define int long long
int n, z, w;
vector<int> v;

signed main() {
    cin >> n >> z >> w;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int ans = 0;
    for(int i=0; i<n; ++i)
        max(abs(v[n-1]-z), abs(v[n-2] - v[n-1]));
    cout << ans << endl;
    return 0;
}

