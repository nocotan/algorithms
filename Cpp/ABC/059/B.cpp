//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long


signed main()
{
    string a, b;
    cin >> a >> b;
    if(a.size()>b.size()) cout << "GREATER" << endl;
    else if(a.size()<b.size()) cout << "LESS" << endl;
    else if(a>b) cout << "GREATER" << endl;
    else if(a==b) cout << "EQUAL" << endl;
    else cout << "LESS" << endl;
    return 0;
}

