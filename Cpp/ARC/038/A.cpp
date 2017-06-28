#include <iostream>
#include <vector>
using namespace std;
#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    int ans = 0;
    for(int i=0; i<n; i+=2) ans += v[i];
    cout << ans << endl;
}
