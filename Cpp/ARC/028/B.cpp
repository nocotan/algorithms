//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int r[100001];
int y[100001];

signed main() {
    int n, k;
    cin >> n >> k;
    for(int i=1; i<=n; ++i) {
        int x;
        cin >> x;
        y[i] = x;
        r[x] = i;
    }

    priority_queue<int> que;
    for(int i=1; i<=n; ++i) {
        que.push(y[i]);
        if(que.size()>k) que.pop();
        if(i>=k) cout << r[que.top()] << endl;
    }

    return 0;
}

