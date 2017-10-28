#include <bits/stdc++.h>
using namespace std;

#define int long long

int dx[]{-1, 0, 1};

int ans = 0;
int n;
vector<int> v;

void rec(int m, int res) {
    if(m==n && res%2==0) {
        ans++;
        return;
    }
    else if(m==n) return;
    for(int i=0; i<3; ++i) {
        int nm = v[m] + dx[i];
        rec(m+1, res*nm);
    }
}

signed main() {
    cin >> n;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    rec(0, 1);
    cout << ans << endl;
    return 0;
}

