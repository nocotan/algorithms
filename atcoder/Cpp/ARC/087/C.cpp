#include <bits/stdc++.h>
using namespace std;

#define int long long

int a[100000];

signed main() {
    int n;
    cin >> n;
    for(int i=0; i<n; ++i) cin >> a[i];
    map<int, int> mp;
    for(int i=0; i<n; ++i) mp[a[i]]++;
    int ans = 0;
    for(auto p : mp) {
        int x = p.first;
        int n = p.second;
        if(n<x) ans += n;
        else ans += n-x;
    }
    cout << ans << endl;
    return 0;
}

