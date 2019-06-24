//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string n;
    cin >> n;
    string t = n;
    reverse(t.begin(), t.end());
    if(n==t) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

