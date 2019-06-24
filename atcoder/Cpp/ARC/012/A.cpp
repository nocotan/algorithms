//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

string day[]{"Sunday","Saturday","Friday","Thursday","Wednesday","Tuesday","Monday"};

auto main() -> signed {
    string s;
    cin >> s;
    for(int i=0; i<7; ++i)
        if(day[i]==s) {
            if(i==0) cout << i << endl;
            else cout << i-1 << endl;
        }
    return 0;
}

