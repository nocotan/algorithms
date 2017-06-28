#include <iostream>
using namespace std;
#define int long long

auto main() -> signed {
    int x, y, k;
    cin >> x >> y >> k;
    while(true) {
        if(y==0||k==0) break;
        y--;
        k--;
        x++;
    }
    x-=k;
    cout << x << endl;
}
