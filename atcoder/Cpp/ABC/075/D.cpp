#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    vector<int> y(n);
    vector<int> xary, yary;

    for(int i=0; i<n; ++i) {
        cin >> x[i] >> y[i];
        xary.push_back(x[i]);
        yary.push_back(y[i]);
    }
    sort(xary.begin(), xary.end());
    sort(yary.begin(), yary.end());

    int ans = (int)((xary[n-1]-xary[0])*(yary[n-1]-yary[0]));
    for(int xi=0; xi<n; ++xi) {
        for(int xj=xi+1; xj<n; ++xj) {
            for(int yi=0; yi<n; ++yi) {
                for(int yj=yi+1; yj<n; ++yj) {
                    int num = 0;
                    int lx = xary[xi], rx = xary[xj];
                    int by = yary[yi], uy = yary[yj];
                    for(int i=0; i<n; ++i) {
                        if(lx<=x[i] && x[i] <= rx && by <= y[i] && y[i] <= uy) num++;
                    }
                    if(num >= k) ans = min(ans, (int)((rx-lx)*(uy-by)));
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}

