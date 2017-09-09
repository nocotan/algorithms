//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string s;
    cin >> s;
    for(int i=0; i<s.size(); ++i) if(i%2==0) cout << s[i];
    cout << endl;
    return 0;
}

