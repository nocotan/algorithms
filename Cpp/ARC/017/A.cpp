//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto is_prime(int n) -> bool {
    switch(n) {
        case 0:
        case 1: return false;
        case 2:
        case 3: return true;
    }

    if(n%2==0) return false;
    if(n%3==0) return false;
    if(n%6!=1 && n%6 != 5) return false;
    for(int i=5; i*i<=n; i+=6) {
        if(n%i==0) return false;
        if(n%(i+2)==0) return false;
    }
    return true;
}

auto main() -> signed {
    int n;
    cin >> n;
    if(is_prime(n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

