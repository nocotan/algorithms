//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long


signed main()
{
    int n;
    cin >> n;
    vector<vector<int> > v(n+1);
    int memo[n+1] = {0};
    for(int i=2; i<=n; ++i) {
        int a;
        cin >> a;
        v[a].push_back(i);
    }
    for(int i=n; i>=1; --i) {
        if(v[i].size()==0) memo[i] = 1;
        else {
            int max_n = -1;
            int min_n = 1e+9;
            for(int j=0; j<v[i].size(); ++j) {
                max_n = max(max_n, memo[v[i][j]]);
                min_n = min(min_n, memo[v[i][j]]);
            }
            memo[i] = max_n + min_n + 1;
        }
    }
    cout << memo[1] << endl;
    return 0;
}

