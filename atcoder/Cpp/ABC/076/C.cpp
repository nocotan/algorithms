#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string s, t;
    cin >> s >> t;
    if(s.size() < t.size()) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }
    vector<string> ans;
    bool f1 = false;
    for(int i=0; i<s.size(); ++i) {
        bool f = true;
        for(int j=0; j<t.size(); ++j) {
            if(s[i+j]!='?'&&s[i+j]!=t[j]) {
                f = false;
                break;
            }
        }
        if(f) {
            f1 = true;
            string s2 = s;
            for(int j=0; j<t.size(); ++j) {
                s2[i+j] = t[j];
            }
            ans.push_back(s2);
        }
    }
    if(!f1) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }
    sort(ans.begin(), ans.end());
    string u = ans[0];
    for(int i=0; i<u.size(); ++i) {
        if(u[i]=='?') u[i] = 'a';
    }
    cout << u << endl;
    return 0;
}

