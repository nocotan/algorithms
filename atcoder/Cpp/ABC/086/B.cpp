#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string a, b;
    cin >> a >> b;
    int c = stoi(a + b);

    int d = sqrt(c);
    if(d*d==c) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

