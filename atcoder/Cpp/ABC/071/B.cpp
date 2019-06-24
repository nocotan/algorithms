//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int memo[100];

signed main() {
    string s;
    cin >> s;
    for(int i=0; i<s.size(); ++i) {
        char a = s[i];
        memo[a-'a']++;
    }
    for(int i=0; i<26; ++i) {
        if(memo[i]==0) {
            cout << (char)(i+'a') << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}

