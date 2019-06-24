#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int l = a+b;
    int r = c+d;
    if(l>r) cout << "Left" << endl;
    else if(l==r) cout << "Balanced" << endl;
    else cout << "Right" << endl;
    return 0;
}

