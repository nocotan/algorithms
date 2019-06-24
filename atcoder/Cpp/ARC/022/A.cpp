//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    string s;
    cin >> s;
    string ict = "";
    for(int i=0; i<s.size(); ++i) {
        if(ict.size()==0&&(s[i]=='I'||s[i]=='i')) ict += s[i];
        else if(ict.size()==1&&(s[i]=='C'||s[i]=='c')) ict += s[i];
        else if(ict.size()==2&&(s[i]=='T'||s[i]=='t')) ict += s[i];
    }
    if(ict.size()==3) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

