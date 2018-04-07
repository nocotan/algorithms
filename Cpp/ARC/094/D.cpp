#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    for(int t=0; t<n; ++t) {
        int a, b;
        cin >> a >> b;
        int score = a * b;
        int ans = 0;
        set<int> st1, st2;
        for(int i=1; i<=score; ++i) {
            if(i==a) continue;
            for(int j=1; j<=score; ++j) {
                if(j==b) continue;
                if(i*j<score) {
                    int tmp1 = st1.size();
                    int tmp2 = st2.size();
                    st1.insert(i);
                    if(st1.size()==tmp1) continue;
                    st2.insert(j);
                    if(st2.size()==tmp2) continue;
                    ans++;
                } else break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

