#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    if(a<=s.size() && s.size()<=b) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

