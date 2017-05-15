//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int> > v;
    for(int i=0; i<m; ++i) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    return 0;
}

