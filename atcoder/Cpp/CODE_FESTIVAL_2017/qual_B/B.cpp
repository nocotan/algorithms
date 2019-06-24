#include <bits/stdc++.h>
using namespace std;


signed main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];
    int m;
    cin >> m;
    vector<int> t(m);
    set<int> st;
    for(int i=0; i<m; ++i) {
        cin >> t[i];
        st.insert(t[i]);
    }

    int j = 0;
    for(auto it=st.begin(); it!=st.end(); ++it) {
        int c = count(t.begin(), t.end(), *it);
        int c2 = count(v.begin(), v.end(), *it);
        if(c>c2) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

