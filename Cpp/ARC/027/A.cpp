//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int h, m;
    cin >> h >> m;
    int t = 18 * 60;
    cout << t - (h*60+m) << endl;
    return 0;
}

