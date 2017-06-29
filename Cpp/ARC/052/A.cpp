#include <iostream>
#include <cctype>
using namespace std;

auto main() -> int {
    string s;
    cin >> s;
    string num = "";
    for(int i=0; i<s.size(); ++i) {
        if(isdigit(s[i])) num += s[i];
    }
    cout << stoi(num) << endl;
}
