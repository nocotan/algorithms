#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    queue<int> a;
    for(int i=0; i<k; ++i) {
        int m;
        cin >> m;
        a.push(m);
    }

    vector<string> v;
    vector<string> u;
    for(int i=1; i<=n; ++i) {
        string m;
        cin >> m;
        if(i==a.front()) {
            v.push_back(m);
            a.pop();
        }
        else u.push_back(m);
    }

    sort(v.begin(), v.end(), [](string s, string t){ return s.size() > t.size(); });
    string s = v[0];
    int ff = 0;
    for(int i=0; i<u.size(); ++i) {
        if(u[i][0]==s[0]) ff++;
    }
    if(!ff) {
        cout << "" << endl;
        return 0;
    }
    for(int i=1; i<=s.size(); ++i) {
        int f = 0;
        for(int j=0; j<u.size(); ++j) {
            if(i>u[j].size()) {
                continue;
            }
            if(s.substr(0, i) == u[j].substr(0, i)) {
                f++;
                continue;
            }
        }
        if(!f) {
            cout << s.substr(0, i) << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
