//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;
vector<int> a;
int solve(int i, int j, vector<int> v) {
    int res;
    if(i==n*3) res = -1e+9;
    else if(j==n) {
        int pre = 0;
        int nex = 0;
        int k = 0;
        int cnt = 0;
        while(true) {
            if(cnt==n) break;
            if(find(v.begin(), v.end(), k)==v.end()) {
                pre += a[k];
                cnt++;
            }
            k++;
        }
        while(true) {
            if(cnt==2*n) break;
            if(find(v.begin(), v.end(), k)==v.end()) {
                nex += a[k];
                cnt++;
            }
            k++;
        }
        cout << v.size() << endl;
        cout << i << endl;
        cout << pre << " : " << nex << endl;
        res = pre-nex;
    }
    else {
        vector<int> vp = v;
        vp.push_back(i);
        res = max(solve(i+1,j,v), solve(i+1, j+1, vp));
    }
    return res;
}

signed main()
{
    cin >> n;
    a.resize(n);
    for(int i=0; i<n*3; ++i) cin >> a[i];
    vector<int> v;
    cout << solve(0,0,v) << endl;
    return 0;
}

