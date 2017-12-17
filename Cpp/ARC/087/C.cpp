#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> st;
    for(int i=0; i<n; ++i) {
        cin >> v[i];
        st.insert(v[i]);
    }

    sort(v.begin(), v.end());

    int ans = 0;
    int tmp = v[0];
    int c = 0;
    for(int i=0; i<n; ++i) {
        if(tmp==v[i])
            c++;
        if(tmp!=v[i]||i==n-1){
            //cout << c << " " << tmp << endl;
            if(c >= tmp) {
                ans += c-tmp;
            } else {
                ans += c;
            }
            c = 1;
            tmp = v[i];
        }
    }
    cout << ans << endl;
    return 0;
}

