//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int count_s[26];
int count_t[26];

auto solve(string s, int k) -> string {
    string t = "";
    for(int i=0; i<s.size(); ++i) {
        count_s[s[i]-'a']++;
        count_t[s[i]-'a']++;
    }
    for(int i=0; i<s.size(); ++i) {
        for(int idx=0; idx<26; ++idx) {
            if(!count_t[idx]) continue;
            char c='a'+idx;
            int diff = 0;
            for(int j=0; j<i; ++j) {
                if(s[j]!=t[j]) ++diff;
            }
            if(c!=s[i]) ++diff;
            count_s[s[i]-'a']--;
            count_t[idx]--;

            int num = s.size()-1-i;
            for(int j=0; j<26; ++j) num -= min(count_s[j], count_t[j]);
            diff+=num;
            if(diff<=k) {
                t += ('a'+idx);
                break;
            }
            count_s[s[i]-'a']++;
            count_t[idx]++;
        }
    }
    return t;
}

auto main() -> signed {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    cout << solve(s, k) << endl;
    return 0;
}

