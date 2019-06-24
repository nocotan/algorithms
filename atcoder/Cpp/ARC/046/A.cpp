#include <iostream>
using namespace std;
#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    int t = n/9+1;
    if(n%9==0) t--;
    int u = n%9;
    if(n%9==0) u = 9;
    for(int i=0; i<t; ++i) cout << u;
    cout << endl;
}
