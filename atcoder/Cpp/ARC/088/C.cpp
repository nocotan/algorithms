#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int x, y;
    cin >> x >> y;
    vector<int> v;
    int t = x;
    while(t<=y) {
        v.push_back(t);
        t*=2;
    }
    cout << v.size() << endl;
    return 0;
}

