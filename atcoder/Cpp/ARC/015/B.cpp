//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;

    int ans[6] = {0};
    for(int i=0; i<n; ++i) {
        double a, b;
        cin >> a >> b;
        if(a>=35) ans[0]++;
        else if(a>=30) ans[1]++;
        else if(a>=25) ans[2]++;
        if(b>=25) ans[3]++;
        else if(b<0&&a>=0) ans[4]++;
        else if(b<0) ans[5]++;
    }
    for(int i=0; i<6; ++i) {
        if(i==0) cout << ans[i];
        else cout << " " << ans[i];
    }
    cout << endl;
    return 0;
}

