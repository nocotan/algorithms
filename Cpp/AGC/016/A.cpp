//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto check(string s) -> bool {
    for(int i=0; i<s.size()-1; ++i) if(s[i]!=s[i+1]) return false;
    return true;
}

auto solve(string s, char target) -> int {
    int res = 0;
    while(true) {
        if(check(s)) return res;
        string t = "";
        for(int i=0; i<s.size()-1; ++i) {
            if(s[i]==target) t += s[i];
            else t += s[i+1];
        }
        s = t;
        res++;
    }
}

auto main() -> signed {
    string s;
    cin >> s;
    int ans = 1e+9;
    for(int k=s.size()-1; k>=0; --k) {
        char target = s[k];
        ans = min(ans, solve(s, target));
    }
    cout << ans << endl;
    return 0;
}

