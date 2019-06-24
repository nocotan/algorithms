//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];

    sort(v.begin(), v.end());
    if(v[v.size()-1] < k) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    set<int> st;
    int f = 0;
    for(int i=0; i<n; ++i) {
        if(v[i]==k || v[i]==1) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
        if(v[i]%2!=0) f++;
        st.insert(v[i]);
    }

    if(f==0&&k%2!=0) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    set<int> st2 = st;
    int c = 0;
    while(true) {
        if(c>=1000000) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
        int m = v.size() - 1;
        st2 = st;
        for(int i=0; i<m; ++i) {
            int u = abs(v[i]-v[i+1]);
            if(u==1 || u==k) {
                cout << "POSSIBLE" << endl;
                return 0;
            }
            if(st.find(u) == st.end()) {
                v.push_back(u);
                st.insert(u);
            }
        }
        if(st2.size() == st.size()) {
            cout << "IMPOSSIBLE" << endl;
            return 0;
        }
        sort(v.begin(), v.end());
        c++;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}

