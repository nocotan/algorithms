//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n, a, b;
    cin >> n >> a >> b;
    int t = 0;
    while(true) {
        if(t==0) n-=a;
        else n -= b;
        if(n<=0) break;
        t = (t+1)%2;
    }
    if(t==0) cout << "Ant" << endl;
    else cout << "Bug" << endl;
    return 0;
}

