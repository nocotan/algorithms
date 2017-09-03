#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long

signed main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    sort(v.begin(), v.end());

    int ans = 0;
    for(int i=0; i<k; ++i) ans += v[i] + i;
    cout << ans << endl;
}
