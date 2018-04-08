#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());

    int a=0, b=0;
    for(int i=0; i<n; ++i) {
        if(i%2==0) a += v[i];
        else b += v[i];
    }
    cout << abs(a-b) << endl;
    return 0;
}

