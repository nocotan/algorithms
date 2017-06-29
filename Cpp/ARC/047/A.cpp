#include <iostream>
using namespace std;

auto main() -> int {
    int n, l;
    cin >> n >> l;
    string s;
    cin >> s;

    int t = 1;
    int ans = 0;
    for(int i=0; i<s.size(); ++i) {
        if(s[i]=='+') t++;
        else t--;
        if(t>l) {
            t = 1;
            ans++;
        }
    }
    cout << ans << endl;
}
