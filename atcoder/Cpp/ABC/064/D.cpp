//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    stack<int> st;
    for(int i=0; i<n; ++i) {
        char c = s[i];
        if(c=='(') {
            ans += "(";
            st.push(0);
        }
        else {
            if(!st.empty() && st.top() == 0) {
                ans += ")";
                st.pop();
            }
            else {
                ans += ")";
                st.push(1);
            }
        }
    }
    int u = st.size();
    for(int i=0; i<u; ++i) {
        if(st.top()==1) ans = "(" + ans;
        else ans += ")";
        st.pop();
    }
    cout << ans << endl;
    return 0;
}

