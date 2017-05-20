//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int h, w;
    cin >> h >> w;
    if(h%3==0||w%3==0) {
        cout << 0 << endl;
        return 0;
    }
    // 縦
    int d = 3;
    int w1 = w;
    int h1 = h;
    vector<int> ans1;
    for(int i=0; i<2; ++i) {
        int min_s = 1e+9;
        int memo_j = 0;
        int tmp = 0;
        for(int j=1; j<=w1; ++j) {
            int s = j * h1;
            if(s>h1*w1/3) {
                if(min_s > abs(h1*w1/d-s)) {
                    min_s = abs(h1*w1/d-s);
                    memo_j = j;
                    tmp = s;
                }
                break;
            }
            min_s = h1*w1/d - s;
            memo_j = j;
            tmp = s;
        }
        d--;
        w1 -= memo_j;
        ans1.push_back(tmp);
    }
    ans1.push_back(h1*w1);
    for(int i=0; i<3; ++i) cout << ans1[i] << endl;
    return 0;
}

