//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int h, w;
    cin >> h >> w;
    vector<string> v(h);
    for(int i=0; i<h; ++i) {
        cin >> v[i];
    }
    for(int i=0; i<w+2; ++i) cout << "#";
    cout << endl;
    for(int i=0; i<h; ++i) {
        cout << "#" << v[i] << "#" << endl;
    }
    for(int i=0; i<w+2; ++i) cout << "#";
    cout << endl;
    return 0;
}

