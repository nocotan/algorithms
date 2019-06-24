//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int a, b;
bool check(int c, int d) {
    double l=0;
    double r = M_PI/2;
    for(int i=0; i<100; ++i) {
        double t = (l+r)/2;
        if(sin(t)*a+cos(t)*b<=c) l=t;
        else r=t;
    }
    if(sin(l)*a+cos(l)*b>c) return false;
    return sin(l)*b+cos(l)*a<=d;
}

signed main() {
    cin >> a >> b;
    int n;
    cin >> n;
    if(a<b) swap(a, b);
    for(int i=0; i<n; ++i) {
        int c, d;
        cin >> c >> d;
        if(a<=c&&b<=d||a<=d&&b<=c||check(c,d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

