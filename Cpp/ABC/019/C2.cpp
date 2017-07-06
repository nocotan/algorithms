//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int memo[500001];

auto main() -> signed {
    int n;
    cin >> n;
    set<int> st;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        while(true) {
            if(a%2!=0) break;
            a/=2;
        }
        st.insert(a);
    }
    int ans = st.size();
    cout << ans << endl;

    return 0;
}

