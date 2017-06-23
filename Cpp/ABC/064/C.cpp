//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int memo[10];
auto main() -> signed {
    int n;
    cin >> n;
    int ans_min = 0;
    int ans_max = 0;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        if(a >= 3200) ans_max++;
        else {
            if(a<400&&memo[0]==0) {
                ans_min++;
                ans_max++;
                memo[0]++;
            }
            else if(a>=400&&a<800&&memo[1]==0){
                ans_min++;
                ans_max++;
                memo[1]++;
            }
            else if(a>=800&&a<1200&&memo[2]==0) {
                ans_min++;
                ans_max++;
                memo[2]++;
            }
            else if(a>=1200&&a<1600&&memo[3]==0){
                ans_min++;
                ans_max++;
                memo[3]++;
            }
            else if(a>=1600&&a<2000&&memo[4]==0){
                ans_min++;
                ans_max++;
                memo[4]++;
            }
            else if(a>=2000&&a<2400&&memo[5]==0){
                ans_min++;
                ans_max++;
                memo[5]++;
            }
            else if(a>=2400&&a<2800&&memo[6]==0){
                ans_min++;
                ans_max++;
                memo[6]++;
            }
            else if(a>=2800&&a<3200&&memo[7]==0){
                ans_min++;
                ans_max++;
                memo[7]++;
            }
        }
    }
    if(ans_min==0) ans_min = 1;
    cout << ans_min << " " << ans_max << endl;
    return 0;
}

