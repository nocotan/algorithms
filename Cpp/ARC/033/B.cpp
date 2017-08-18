//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int na, nb;
    cin >> na >> nb;
    set<int> a, b;
    for(int i=0; i<na; ++i) {
        int x;
        cin >> x;
        a.insert(x);
    }
    for(int i=0; i<nb; ++i) {
        int x;
        cin >> x;
        b.insert(x);
    }

    vector<int> union_set;
    vector<int> intersec_set;

    set_union(a.begin(), a.end(), b.begin(), b.end(), back_inserter(union_set));
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(intersec_set));
    cout << setprecision(10) << intersec_set.size()*1.0 / union_set.size()*1.0 << endl;
    return 0;
}

