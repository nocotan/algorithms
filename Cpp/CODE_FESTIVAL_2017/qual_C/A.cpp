#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string s;
    cin >> s;
    if(s=="AC") {
        cout << "Yes" << endl;
        return 0;
    }
    if(s.size()==1)  {
        cout << "No" << endl;
        return 0;
    }
    for(int i=0; i<s.size()-2; ++i) {
        if(s.substr(i,2)=="AC") {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

