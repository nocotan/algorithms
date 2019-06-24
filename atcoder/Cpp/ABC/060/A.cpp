//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    string A, B, C;
    cin >> A >> B >> C;
    if(A[A.size()-1]==B[0]&&B[B.size()-1]==C[0]) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

