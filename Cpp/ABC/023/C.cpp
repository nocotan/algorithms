#include <iostream>
#include <map>
using namespace std;
#define int long long

int rs[1024*1024];
int cs[1024*1024];
int rc[1024*1024];
int cc[1024*1024];

auto main() -> signed {
    int r, c, k, n;
    cin >> r >> c >> k >> n;
    for(int i=0; i<n; ++i) {
        cin >> rs[i] >> cs[i];
        rc[rs[i]]++;
        cc[cs[i]]++;
    }

    map<int, int> num_r;
    map<int, int> num_c;

    for(int i=0; i<r; ++i) {
        num_r[rc[i+1]]++;
    }
    for(int i=0; i<c; ++i) {
        num_c[cc[i+1]]++;
    }

    int ans = 0;
    for(int i=0; i<k+1; ++i) {
        ans += num_r[i] * num_c[k-i];
    }

    for(int i=0; i<n; ++i) {
        int a = rs[i];
        int b = cs[i];

        if(rc[a]+cc[b]==k) ans--;
        if(rc[a]+cc[b]==k+1) ans++;
    }
    cout << ans << endl;
}
