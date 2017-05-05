//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int n, w;
int W[100];
int V[100];

int dp[101][4];

vector<int> v;

int rec(int i, int j) {
    if(dp[i][j]!=0) return dp[i][j];
    int res;
    if(i==n) res = 0;
    else if(j<W[i]) res = rec(i+1, j);
    else {
        res = max(rec(i+1, j), rec(i+1, j-W[i])+V[i]);
    }

    return dp[i][j] = res;
}

signed main()
{
    cin >> n >> w;
    for(int i=0; i<n; ++i) {
        cin >> W[i] >> V[i];
        if(i==0) v.push_back(W[i]);
        else if(find(v.begin(), v.end(), W[i])==v.end())v.push_back(W[i]);
    }
    cout << rec(0, w) << endl;
    return 0;
}
