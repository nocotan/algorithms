//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<string> v;

void paint(int r, int c) {
    int i = r;
    for(int j=0; j<=c; ++j) v[i][j] = 'o';

    i = r + 1;
    if(i >= v.size()) return;
    for(int j=v[0].size()-1; j>=c; --j) v[i][j] = 'o';
}

auto main() -> signed {
    int n;
    cin >> n;
    string s;
    for(int i=0; i<n; ++i) {
        cin >> s;
        v.push_back(s);
    }

    int ans = 0;
    for(int i=0; i<v.size(); ++i) {
        for(int j=v[i].size()-1; j>=0; --j) {
            if(v[i][j] == '.') {
                paint(i, j);
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

