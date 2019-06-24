//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    int ans = 0;
    for(int i=1; i<=sqrt(n); ++i) {
        if(n%i==0) {
            ans += i;
            if(n/i!=i)
                ans += n/i;
        }
    }
    if(ans==2*n) cout << "Perfect" << endl;
    else if(ans<2*n) cout << "Deficient" << endl;
    else cout << "Abundant" << endl;
    return 0;
}

