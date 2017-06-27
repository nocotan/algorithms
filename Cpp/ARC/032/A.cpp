//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

bool is_prime(const unsigned n){
    switch(n){
        case 0:
        case 1: return false;
        case 2: return true;
    }

    if(n%2 == 0) return false;
    for(unsigned i=3;i*i<=n;i+=2){
        if(n%i == 0) return false;
    }
    return true;
}

auto main() -> signed {
    int n;
    cin >> n;
    int a = 0;
    for(int i=1; i<=n; ++i) a+=i;
    if(is_prime(a)) cout << "WANWAN" << endl;
    else cout << "BOWWOW" << endl;
    return 0;
}

