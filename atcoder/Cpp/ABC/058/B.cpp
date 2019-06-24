//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long


signed main()
{
    string o, e;
    cin >> o >> e;
    for(int i=0; i<o.size(); ++i) {
        if(i<e.size())
            cout << o[i] << e[i];
        else cout << o[i];
    }
    cout << endl;
    return 0;
}

