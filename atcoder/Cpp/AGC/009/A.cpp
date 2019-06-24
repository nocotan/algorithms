//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    for(int i=0; i<n; ++i) {
        cin >> A[i];
        cin >> B[i];
    }
    int ans = 0;
    for(int i=n-1; i>=0; --i) {
        if((A[i]+ans)%B[i]==0) continue;
        ans += B[i] - (A[i]+ans)%B[i];
    }
    cout << ans << endl;
    return 0;
}

