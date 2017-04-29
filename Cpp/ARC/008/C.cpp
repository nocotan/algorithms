//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int n;
    cin >> n;
    vector<int> c(n);
    for(int i=0; i<n; ++i) cin >> c[i];
    double ans = 0;
    for(int i=0; i<n; ++i) {
        int cnt = count_if(c.begin(), c.end(), [&](int x){return c[i]%x==0;}) - 1;
        if(cnt==0) ans++;
        else {
            cnt++;
            ans += (cnt-cnt/2) / (double)cnt;
        }
    }
    printf("%.12lf\n", ans);
    return 0;
}

