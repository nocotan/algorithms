#include <iostream>
#include <iomanip>
using namespace std;

auto main() -> int {
    double l, x, y, s, d;
    cin >> l >> x >> y >> s >> d;

    if(d < s) d += l;
    double ans = (d-s)/(x+y);
    if(y>x) {
        ans = min(ans, (s-(d-l))/(y-x));
    }


    cout << setprecision(10) << ans << endl;
}
