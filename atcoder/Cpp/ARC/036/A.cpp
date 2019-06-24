#include <iostream>
#include <vector>
using namespace std;
#define int long long

auto main() -> signed {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    for(int i=2; i<n; ++i) {
        int x = v[i] + v[i-1] + v[i-2];
        if(x<k) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
