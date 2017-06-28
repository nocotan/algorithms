#include <iostream>
#include <algorithm>
using namespace std;
#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    int r = 0;
    int b = 0;
    for(int i=0; i<n; ++i) {
        string s;
        cin >> s;
        for(int j=0; j<s.size(); ++j) {
            if(s[j]=='R') r++;
            if(s[j]=='B') b++;
        }
    }
    if(r>b) cout << "TAKAHASHI" << endl;
    else if(r<b) cout << "AOKI" << endl;
    else cout << "DRAW" << endl;
}
