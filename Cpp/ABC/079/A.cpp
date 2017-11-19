#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string s;
    cin >> s;
    for(int i=0; i<2; ++i) {
        if(s[i]==s[i+1]&& s[i]==s[i+2]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

