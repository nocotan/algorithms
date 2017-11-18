#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    int a = 1;
    while(true) {
        if(a*a>=n) break;
        a++;
    }
    if(a*a>n) a--;
    cout << a*a << endl;
    return 0;
}

