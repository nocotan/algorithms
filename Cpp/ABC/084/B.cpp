#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int a, b;
    string s;
    cin >> a >> b >> s;
    if(s.size()!=(a+b+1) || s[a]!='-') {
        cout << "No" << endl;
        return 0;
    }
    for(int i=0; i<s.size(); ++i) {
        if(i==a) continue;
        if(!isdigit(s[i])) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}

