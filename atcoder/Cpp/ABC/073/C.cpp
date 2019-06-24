//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> st;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        if(st.find(a)!=st.end()) st.erase(a);
        else st.insert(a);
    }
    cout << st.size() << endl;
    return 0;
}

