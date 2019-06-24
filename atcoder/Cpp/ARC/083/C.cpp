#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int sum = 0;
    int t = 0;
    for(int i=0; i<=500; ++i) {
        for(int j=0; j<=500; ++j) {
            if(i==0&&j==0) continue;
            for(int k=0; k<=500; ++k) {
                for(int l=0; l<=500; ++l) {
                    int A = a*i, B = b*j, C = c*k, D = d*l;
                    if((100*A+100*B+C+D)>f) {
                        break;
                    }
                    if((double)(C+D)/(double)(100*(A+B))*1000>e*10) break;
                    if(sum==0 || (double)t*100/(double)sum< 100*(double)(C+D)/(double)(100*A+100*B+C+D)) {
                        //cout << A << " " << B << " " << C << " " << D << endl;
                        sum = 100*A+100*B+C+D;
                        t = C+D;
                    }
                }
            }
        }
    }
    cout << sum << " " << t << endl;
    return 0;
}

