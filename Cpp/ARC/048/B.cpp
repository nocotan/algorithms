//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; ++i) {
        int r, h;
        cin >> r >> h;
        v[i] = make_pair(r, h);
    }

    int ans1[n] = {0};
    int ans2[n] = {0};
    int ans3[n] = {0};
    for(int i=0; i<n; ++i) {
        auto p1 = v[i];
        for(int j=i+1; j<n; ++j) {
            if(i==j) continue;
            auto p2 = v[j];
            if(p1.first > p2.first) {
                ans1[i]++;
                ans2[j]++;
            }
            else if(p1.first < p2.first) {
                ans1[j]++;
                ans2[i]++;
            } else {
                int h1 = p1.second;
                int h2 = p2.second;
                if(h1==1&&h2==2||h1==2&&h2==3||h1==3&&h2==1) {
                    ans1[i]++;
                    ans2[j]++;
                } else if(h2==1&&h1==2||h2==2&&h1==3||h2==3&&h1==1) {
                    ans1[j]++;
                    ans2[i]++;
                } else {
                    ans3[i]++;
                    ans3[j]++;
                }
            }
        }
    }
    for(int i=0; i<n; ++i) {
        cout << ans1[i] << " " << ans2[i] << " " << ans3[i] << endl;
    }
    return 0;
}

