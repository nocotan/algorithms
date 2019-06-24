//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int gcd(int a, int b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

int lcm(int a, int b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}

signed main() {
    int n;
    cin >> n;
    int ans = 1;
    for(int i=0; i<n; ++i) {
        int t;
        cin >> t;
        ans = lcm(ans, t);
    }
    cout << ans << endl;
    return 0;
}

