#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string s;
    cin >> s;
    if(s=="abc"||s=="acb"||s=="bac"||s=="bca"||s=="cab"||s=="cba")
        cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

