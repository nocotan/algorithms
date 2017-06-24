//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int y, m, d;
    cin >> y >> m >> d;
    if(m==1||m==2) {
        y--;
        m+=12;
    }

    int t = 735369;
    int u = 365*y+(y/4)-(y/100)+(y/400)+(306*(m+1)/10)+d-429;
    cout << t - u << endl;
    return 0;
}

