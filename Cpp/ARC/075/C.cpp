//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; ++i) {
        int s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    int ans = accumulate(v.begin(), v.end(), 0);
    int i = 0;
    while(true) {
        if(ans%10!=0) break;
        if(i==v.size()) break;
        if(i!=0) ans += v[i-1];
        ans -= v[i];
        i++;
    }
    if(ans%10==0) ans = 0;
    cout << ans << endl;
    return 0;
}

