//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];

    vector<string> w;
    string t = v[0];
    w.push_back(t);
    int turn = 1;
    for(int i=1; i<n; ++i) {
        string u = v[i];
        if(t[t.size()-1]!=u[0] || find(w.begin(), w.end(), u)!=w.end()) {
            if(turn==1) cout << "WIN" << endl;
            else cout << "LOSE" << endl;
            return 0;
        }
        turn = (turn+1)%2;
        t = u;
        w.push_back(t);
    }
    cout << "DRAW" << endl;
    return 0;
}

