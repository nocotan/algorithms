//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int memo[1000000];

auto fib(int n) -> int {
    if(n<=1) return 1;
    if(memo[n]!=0) return memo[n];
    else return memo[n] = fib(n-1)+fib(n-2);
}
auto main() -> signed {
    int k;
    cin >> k;
    cout << fib(k+1) << " " << fib(k) << endl;
    return 0;
}

