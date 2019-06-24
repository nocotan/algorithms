#include <bits/stdc++.h>
using namespace std;

#define int long long

int memo[87];

int luca(int n) {
    if(memo[n]!=0) return memo[n];
    if(n==0) return 2;
    if(n==1) return 1;
    return memo[n] = luca(n-1) + luca(n-2);
}

signed main() {
    int n;
    cin >> n;
    cout << luca(n) << endl;
    return 0;
}

