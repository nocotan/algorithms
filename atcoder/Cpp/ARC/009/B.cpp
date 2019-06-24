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
    map<int, int> mp;
    for(int i=0; i<10; ++i) {
        int a;
        cin >> a;
        mp[a] = i;
    }
    int n;
    cin >> n;
    vector<int> u;
    vector<string> tmp;
    for(int i=0; i<n; ++i) {
        string s;
        cin >> s;
        string t = "";
        for(int j=0; j<s.size(); ++j) t += to_string(mp[s[j]-'0']);
        u.push_back(stoi(t));
        tmp.push_back(s);
    }

    auto new_v = sorted_idx(u);
    for(int i=0; i<new_v.size(); ++i) {
        cout << tmp[new_v[i]] << endl;
    }

    return 0;
}

