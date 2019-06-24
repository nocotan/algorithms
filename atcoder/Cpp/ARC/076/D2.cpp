//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

// ソート前インデックスのベクタ
template<typename T>
vector<int> sorted_idx(const vector<T> &v) {
    vector<int> res(v.size());
    iota(res.begin(), res.end(), 0);
    sort(res.begin(), res.end(), [&v](int i1, int i2){return v[i1]<v[i2];});
    return res;
}

auto main() -> signed {
    int n;
    cin >> n;
    vector<pair<int, int> > v;
    vector<int> u;
    vector<int> t;
    for(int i=0; i<n; ++i) {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
        u.push_back(x);
        t.push_back(y);
    }

    vector<int> srtd_u = sorted_idx(u);
    vector<int> srtd_t = sorted_idx(t);

    int ans = 0;
    for(int i=0; i<srtd_u.size()-1; ++i) {
        int idx = srtd_u[i];
        auto p1 = v[i];
        auto p2 = v[i+1];
    }

    cout << ans << endl;

    return 0;
}

