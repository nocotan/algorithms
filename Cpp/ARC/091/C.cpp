#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, m;
    cin >> n >> m;
    cout << abs(n*m - (n+n+m+m-4)) << endl;
    return 0;
}

