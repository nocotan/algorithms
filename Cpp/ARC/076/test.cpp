//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    cout << 100000 << endl;
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dice(1,1e+9);
    for(int i=0; i<100000; ++i) {
        cout << i << " " << i+1 << endl;
    }
    return 0;
}

