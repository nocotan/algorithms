#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string s;
    cin >> s;
    int m = 0;
    for(int i=0; i<s.size(); ++i)
        if(s[i]=='1') m++;
    int t = 0;
    string tmp;
    tmp.push_back(s[0]);
    for(int i=1; i<s.size(); ++i) {
        char a = tmp[tmp.size()-1];
        if(a==s[i]) tmp.push_back(s[i]);
        else {
            t = max(t, (int)tmp.size());
            tmp = "";
            tmp.push_back(s[i]);
        }
    }
    t = max(t, (int)tmp.size());
    if(t%2==0) cout << t << endl;
    else cout << t+1 << endl;
    return 0;
}

