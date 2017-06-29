#include <iostream>
using namespace std;

auto main() -> int {
    int a, b;
    cin >> a >> b;
    int ans = b - a;
    if(a<0&&b>0) ans--;
    cout << ans << endl;
}
