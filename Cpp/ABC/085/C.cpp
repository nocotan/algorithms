#include <bits/stdc++.h>
using namespace std;

signed main() {
    int x, y;
    cin >> x >> y;

    for(int a=0; a<=x; ++a) {
        for(int b=0; b<=x; ++b) {
            int c = x - a - b;
            if(10000*a+5000*b+1000*c==y && c>=0) {
                cout << a << " " << b << " " << c << endl;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}

