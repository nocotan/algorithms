#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    int n = 0;
    while(true) {
        sort(v.begin(), v.end());
        if(v[0]==v[1] && v[0]==v[2]) {
            cout << n << endl;
            return 0;
        }
        if(v[0]+2 <= v[2]) {
            n++;
            v[0] += 2;
            continue;
        } else {
            v[0]++;
            v[1]++;
            n++;
        }
    }
    return 0;
}

