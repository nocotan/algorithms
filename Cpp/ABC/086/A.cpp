#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int a, b;
    cin >> a >> b;
    int d = a * b;
    if(d%2!=0) cout << "Odd" << endl;
    else cout << "Even" << endl;
    return 0;
}

