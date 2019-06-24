//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int memo[4];
signed main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i=0; i<n; ++i) {
        int a = s[i]-'0';
        a--;
        memo[a]++;
    }

    int min_ans = *min_element(memo, memo+4);
    int max_ans = *max_element(memo, memo+4);
    cout << max_ans << " " << min_ans << endl;
    return 0;
}

