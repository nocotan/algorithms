#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    vector<string> d;
    for(int i=0; i<2; ++i) {
        string s;
        cin >> s;
        d.push_back(s);
    }
    if(d[0][0]==d[1][2]&&d[0][1]==d[1][1]&&d[0][2]==d[1][0])
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

