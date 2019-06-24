#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int N;
    cin >> N;
    set<int> st;
    for(int i=0; i<N; ++i) {
        int a;
        cin >> a;
        st.insert(a);
    }
    cout << st.size() << endl;
    return 0;
}

