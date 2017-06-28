#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
#define int long long

auto main() -> signed {
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    for(int i=0; i<s.size(); ++i) {
        if(s[i]!=t[i]&&s[i]!='*'&&t[i]!='*') {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}
