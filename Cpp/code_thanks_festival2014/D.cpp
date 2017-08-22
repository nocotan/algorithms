//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int lcm(int a, int b) {
    int temp = __gcd(a, b);

    return temp ? (a / temp * b) : 0;
}


int memo[100000001];

signed main() {
    int n, t;
    cin >> n >> t;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        for(int j=1; j<3000; ++j) {
            if(j*a>t) break;
            memo[a*j]++;
        }
    }
    cout << *max_element(memo, memo+t+1) << endl;
    return 0;
}

