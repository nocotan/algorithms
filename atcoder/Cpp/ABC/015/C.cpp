//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int n, k;

int t[6][6];

auto dfs(int num, int value) -> bool {
    if(num==n) return (value==0);
    for(int i=0; i<k; ++i) {
        if(dfs(num+1, value xor t[num][i])) return true;
    }
    return false;
}

auto main() -> signed {
    cin >> n >> k;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<k; ++j) cin >> t[i][j];
    }
    for(int i=0; i<k; ++i) {
        if(dfs(1, t[0][i])) {
            cout << "Found" << endl;
            return 0;
        }
    }
    cout << "Nothing" << endl;
    return 0;
}

