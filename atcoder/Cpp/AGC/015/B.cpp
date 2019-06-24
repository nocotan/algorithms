//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0; i<s.size(); ++i) {
        if(s[i]=='U') {
            ans+=(s.size()-i-1)+i*2;
        } else {
            ans+=(s.size()-i-1)*2+i;
        }
    }
    cout << ans << endl;
    return 0;
}

