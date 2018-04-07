#include <bits/stdc++.h>
using namespace std;

#define int long long
int mod = 998244353;

set<string> st;

void dp(string s) {
    string t = s;
    for(int i=0; i<s.size()-1; ++i) {
        s = t;
        int tmp = st.size();
        if(s[i] != s[i+1]) {
            if(s[i]=='a'&&s[i+1]=='b') {
                s[i] = 'c';
                s[i+1] = 'c';
            } else if(s[i]=='a'&&s[i+1]=='c') {
                s[i] = 'b';
                s[i+1] = 'b';
            } else {
                s[i] = 'a';
                s[i+1] = 'a';
            }
            st.insert(s);
            if(tmp != st.size())
                dp(s);
        }
    }
}

signed main() {
    string s;
    cin >> s;
    st.insert(s);
    dp(s);
    cout << st.size()%mod << endl;
    return 0;
}

