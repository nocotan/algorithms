#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, m, k;
    cin >> n >> m >> k;
    if(k%n==0||k%m==0||k%(n+m)==0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
