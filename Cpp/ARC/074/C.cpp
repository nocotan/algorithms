#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define int long long

auto main() -> signed {
    int H, W;
    cin >> H >> W;
    if(H%3==0||W%3==0) {
        cout << 0 << endl;
        return 0;
    }

    int ans = 1e+9;
    for(int h=1; h<H; ++h) {
        int a = h*W;
        int bw = W/2;
        int b = bw*(H-h);
        int c = (W-bw)*(H-h);
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        ans = min(ans, v[2]-v[0]);

        if(H-h>=2) {
            int bh = (H-h)/2;
            b = bh*W;
            c = (H-h-bh)*W;
            v.clear();
            v.push_back(a);
            v.push_back(b);
            v.push_back(c);
            sort(v.begin(), v.end());
            ans = min(ans, v[2]-v[0]);
        }
    }

    for(int w=1; w<W; ++w) {
        int a = w*H;
        int bh = H/2;
        int b = bh*(W-w);
        int c = (W-w)*(H-bh);
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        ans = min(ans, v[2]-v[0]);

        if(W-w>=2) {
            int bw = (W-w)/2;
            b = bw*H;
            c = (W-w-bw)*H;
            v.clear();
            v.push_back(a);
            v.push_back(b);
            v.push_back(c);
            sort(v.begin(), v.end());
            ans = min(ans, v[2]-v[0]);
        }
    }
    cout << ans << endl;
}
