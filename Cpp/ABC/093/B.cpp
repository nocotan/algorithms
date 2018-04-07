#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int a, b, k;
    cin >> a >> b >> k;
    set<int> st;
    for(int i=0; i<k; ++i)
        if(a+i <= b) st.insert(a + i);
    for(int i=0; i<k; ++i)
        if(b-k+i+1>=a) st.insert(b - k + i + 1);
    for(auto it=st.begin(); it!=st.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}

