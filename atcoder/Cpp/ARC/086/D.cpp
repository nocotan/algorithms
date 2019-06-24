#include <bits/stdc++.h>
using namespace std;

#define int long long

template<typename T>
vector<int> sorted_idx(const vector<T> &v) {
    vector<int> res(v.size());
    iota(res.begin(), res.end(), 0);
    sort(res.begin(), res.end(), [&v](int i1, int i2){return v[i1]<v[i2];});
    return res;
}

signed main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; ++i) cin >> a[i];

    vector<int> sorted_a = sorted_idx(a);

    vector<pair<int,int>> vp;
    for(int i=0; i<n-1; ++i) {
        while(a[i]>a[i+1]) {
            int idx = sorted_a[n-1];
            if(a[idx]>=0) {
                a[i+1] += a[idx];
                vp.push_back(make_pair(idx+1, i+2));
            } else if(a[idx]<0) {
                a[i] += a[idx];
                vp.push_back(make_pair(idx+1, i+1));
            }
        }
    }
    cout << vp.size() << endl;
    for(auto p : vp) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}

