#include <iostream>
#include <vector>
using namespace std;
#define int long long

auto main() -> signed {
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];

    int ans = 0;
    for(int i=0; i<v.size()-1; ++i) ans += min(t, v[i+1]-v[i]);
    ans += t;

    cout << ans << endl;
}
