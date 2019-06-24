//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    sort(v.begin(), v.end());
    vector<int> ans;
    for(int i=v.size()-1; i>0; i--) {
        if(v[i]==v[i-1]) {
            ans.push_back(v[i]);
            i--;
        }
    }
    if(ans.size()<=1) {
        cout << 0 << endl;
        return 0;
    }
    sort(ans.begin(), ans.end());
    cout << ans[ans.size()-1] * ans[ans.size()-2] << endl;
    return 0;
}

