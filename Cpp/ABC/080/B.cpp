#include <bits/stdc++.h>
using namespace std;

#define int long long

int f(string x) {
    int res = 0;
    for(int i=0; i<x.size(); ++i) {
        res += x[i] - '0';
    }
    return res;
}

signed main() {
    string n;
    cin >> n;
    if(stoi(n)%f(n)==0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

