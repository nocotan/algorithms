//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    string s;
    cin >> s;
    while(true) {
        s = s.substr(0, s.size()-1);
        if(s.size()%2!=0) {
            s = s.substr(0, s.size()-1);
        }
        if(s.substr(0, s.size()/2)==s.substr(s.size()/2, s.size())) break;
    }
    cout << s.size() << endl;
    return 0;
}

