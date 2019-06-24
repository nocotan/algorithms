//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n, d, k;
    cin >> n >> d >> k;
    vector<pair<int, int> > v;
    for(int i=0; i<d; ++i) {
        int l, r;
        cin >> l >> r;
        v.push_back(make_pair(l, r));
    }
    vector<pair<int, int> > u;
    for(int i=0; i<k; ++i) {
        int s, t;
        cin >> s >> t;
        u.push_back(make_pair(s, t));
    }

    for(int i=0; i<k; ++i) {
        auto p = u[i];
        int s = p.first;
        int t = p.second;
        int d;
        if(s<t) d = 1;
        else d = -1;

        int ans = 0;
        for(int j=0; j<v.size(); ++j) {
            ans++;
            auto range = v[j];
            int l = range.first;
            int r = range.second;
            if(d>0&&l<=s&&s<=r) {
                s=r;
                if(s>=t) {
                    cout << ans << endl;
                    break;
                }
            }
            else if(d<0&&l<=s&&s<=r){
                s=l;
                if(s<=t) {
                    cout << ans << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

