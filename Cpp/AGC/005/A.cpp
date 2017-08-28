//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long


signed main()
{
    string s;
    cin >> s;
    stack<char> st;
    for(int i=0; i<s.size(); ++i) {
        char c = s[i];
        if(c=='S') st.push(c);
        else {
            if(st.empty()||st.top()=='T') st.push(c);
            else st.pop();
        }
    }
    cout << st.size() << endl;
    return 0;
}

