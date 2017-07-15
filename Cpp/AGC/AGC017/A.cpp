//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto solve(vector<int> v, int p, int a, int b) -> int {
    int res = 0;
    if(p==0) {
        for(int i=1; i<=a; ++i) {
            res += i
        }
    }
}

auto main() -> signed {
    int n, p;
    cin >> n >> p;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    sort(v.begin(), v.end());

    int a = 0;
    int b = 0;
    for(int i=0; i<v.size(); ++i) {
        if(v[i]%2==0) a++;
        else b++;
    }
    if(p==1) {
    }
    return 0;
}

