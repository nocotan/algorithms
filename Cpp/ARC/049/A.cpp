#include <iostream>
#include <string>
using namespace std;

auto main() -> int {
    string s;
    cin >> s;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int i=0; i<s.size(); ++i) {
        if(i==a||i==b||i==c||i==d) cout << "\"" ;
        cout << s[i];
    }
    if(d==s.size()) cout << "\"";
    cout << endl;
}
