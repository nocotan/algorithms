#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    int d, x;
    cin >> d >> x;
    int ans = n;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        int b = a + 1;
        while(true) {
            if(b>d) break;
            ans++;
            b += a;
        }
    }
    cout << x + ans << endl;
    return 0;
}

