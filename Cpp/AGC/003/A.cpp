//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int memo[10000];

signed main() {
    string s;
    cin >> s;
    for(int i=0; i<s.size(); ++i) memo[s[i]] = 1;

    int cnt = 0;
    for(int i='E'; i<='W'; ++i) if(memo[i]==1) cnt++;
    if(cnt==4) cout << "Yes" << endl;
    else if(cnt==3||cnt==1) cout << "No" << endl;
    else {
        if(memo['N']&&memo['S']||memo['E']&&memo['W']) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

