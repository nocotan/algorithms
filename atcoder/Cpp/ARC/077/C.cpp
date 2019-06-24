//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    deque<int> b;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        if(i%2==0) {
            if(n%2==0) b.push_back(a);
            else b.push_front(a);
        }
        else {
            if(n%2==0) b.push_front(a);
            else b.push_back(a);
        }
    }
    for_each(b.begin(), b.end(), [](int a){
        cout << a << endl;
    });
    return 0;
}

