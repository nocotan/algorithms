#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    double max_score = -1;
    for(int i=0; i<n; ++i) {
        double tmp = 0;
        double a;
        for(int i=0; i<4; ++i) {
            cin >> a;
            tmp += a;
        }
        cin >> a;
        tmp += a * 110/900;
        max_score = max(tmp, max_score);
    }
    cout << setprecision(10) << max_score << endl;
}
