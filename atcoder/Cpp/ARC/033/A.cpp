#include <iostream>
using namespace std;
#define int long long

auto solve(int n) -> int {
    if(n==1) return 1;
    return solve(n-1) + n;
}

auto main() -> signed {
    int n;
    cin >> n;
    cout << solve(n) << endl;
}
