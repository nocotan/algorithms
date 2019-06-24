//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int memo[100001];

auto main() -> signed {
    int n, k;
    cin >> n >> k;
    set<int> v;
    for(int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b;
        v.insert(a);
        memo[a] += b;
    }

    for(auto&& e : v) {
        k -= memo[e];
        if(k<=0) {
            cout << e << endl;
            return 0;
        }
    }
    return 0;
}

