#include <iostream>
#include <stack>
using namespace std;
#define int long long

int memo[100001] = {0};
auto main() -> signed {
    int n, m;
    cin >> n >> m;
    stack<int> st;
    for(int i=0; i<m; ++i) {
        int a;
        cin >> a;
        st.push(a);
    }
    while(!st.empty()) {
        int a = st.top();
        st.pop();
        if(memo[a]==0) cout << a << endl;
        memo[a]++;
    }
    for(int i=1; i<n+1; ++i) {
        if(memo[i]==0) cout << i << endl;
    }
}
