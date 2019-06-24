#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string s;
    cin >> s;
    if(s[0]==s[1]&&s[2]==s[3]&&s[1]!=s[2]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

