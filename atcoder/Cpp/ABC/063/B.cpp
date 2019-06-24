//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    string s;
    cin >> s;
    int memo[1000] = {0};
    for(int i=0; i<s.size(); ++i) memo[s[i]]++;
    for(int i=0; i<1000; ++i)
        if(memo[i]>=2) {
            cout << "no" << endl;
            return 0;
        }
    cout << "yes" << endl;
    return 0;
}

