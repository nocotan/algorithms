#include <bits/stdc++.h>
using namespace std;

#define int long long

int memo[26];

signed main() {
    string s;
    cin >> s;
    for(int i=0; i<s.size(); ++i) memo[s[i]-'a']++;
    int cnt = 0;
    for(int i=0; i<26; ++i) {
        if(memo[i]%2!=0) cnt++;
    }
    if(cnt%2==0) {
        cout << -1 << endl;
        return 0;
    }
    string t = s;
    reverse(t.begin(), t.end());
    if(s==t) {
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    string u = "";
    if(s.size()%2==0) {
        u = s[s.size()/2] + s[(s.size()/2)-1];
    } else {
        u = s[(s.size()/2)-1] + s[s.size()/2] + s[(s.size()/2)+1];
    }
    while(true) {
        while(true) {
        }
    }
    return 0;
}

