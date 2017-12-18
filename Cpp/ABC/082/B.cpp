#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<char>());
    if(s<t) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

