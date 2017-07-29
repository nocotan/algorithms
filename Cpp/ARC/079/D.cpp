//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int k;
    cin >> k;
    if(k%2==0) {
        cout << 2 << endl;
        cout << 1+k/2 << " " << 1+k/2 << endl;
    } else {
        int a = (k+1)/2;
        int b;
        if(a%2==0) b = a/2;
        else b = (a+1)/2;

        int x = (b-1)*2;

        int y;
        if(a==1) y = 2;
        else {
            if(a%2==0) y = a+2;
            else y = a+1;
        }

        cout << 2 << endl;
        cout << x << " " << y << endl;
    }
    return 0;
}

