//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];

    sort(v.begin(), v.end(), [](string s, string t){
        reverse(s.begin(), s.end());
        reverse(t.begin(), t.end());
        return s < t;
    });

    for(auto s : v) cout << s << endl;
    return 0;
}

