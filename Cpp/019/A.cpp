//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    string s;
    cin >> s;
    for(int i=0; i<s.size(); ++i) {
        char c = s[i];
        if(c=='O'||c=='D') s[i] = '0';
        else if(c=='I') s[i] = '1';
        else if(c=='Z') s[i] = '2';
        else if(c=='S') s[i] = '5';
        else if(c=='B') s[i] = '8';
    }
    cout << s << endl;
    return 0;
}

