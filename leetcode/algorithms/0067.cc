#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


class Solution {
    public:
    string addBinary(string a, string b) {
        string c = "";
        if (a.size() < b.size()) {
            a = string(b.size() - a.size(), '0') + a;
        } else {
            b = string(a.size() - b.size(), '0') + b;
        }

        int t = 0;
        for (int i=1; i<=a.size(); ++i) {
            c += to_string(((int)(a[a.size()-i]-'0')+(int)(b[b.size()-i]-'0')+t) % 2);
            t = ((int)(a[a.size()-i]-'0')+(int)(b[b.size()-i]-'0')+t) / 2;
        }

        if (t>0) {
            c += to_string(t);
        }

        reverse(c.begin(), c.end());
        return c;
    }
};

int main() {
    string a, b;
    cin >> a >> b;

    Solution solution;

    cout << solution.addBinary(a, b) << endl;
}