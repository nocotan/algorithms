#include <iostream>
using namespace std;
#define int long long

auto main() -> signed {
    int a, b, k, l;
    cin >> a >> b >> k >> l;
    int ans = (k/l)*b;
    int t = (k%l)*a;
    if(t<b) cout << ans+t << endl;
    else cout << ans+b << endl;
}
