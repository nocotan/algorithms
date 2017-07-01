//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int h[100001];
int n, a, b;

auto check(int k) -> bool {
    int res = 0;
    for(int i=0; i<n; ++i) {
        if(b*k<h[i]) {
            if((h[i]-k*b)%(a-b)==0) res += (h[i]-k*b)/(a-b);
            else res += (h[i]-k*b)/(a-b)+1;
        }
    }
    return res <= k;
}

auto main() -> signed {
    cin >> n >> a >> b;
    for(int i=0; i<n; ++i) cin >> h[i];
    int lo=0;
    int hi = 1e+9;
    int mid;
    while(lo<hi) {
        mid = (lo+hi)/2;
        if(check(mid)) {
            hi = mid;
        } else lo = mid+1;
    }
    cout << hi << endl;
    return 0;
}

