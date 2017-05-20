//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int w[100000];
int dp[3010][3010];
signed main()
{
int n;

cin >> n;
  for(int i=0; i<n; ++i) cin >> w[i];
  if (n > 100) return 0;
  
  fill_n(*dp, 3010 * 3010, 1e+9);
  for(int i=0;i<n; ++i) dp[i][i + 1] = 0;
  for(int i=1; i<n + 1; ++i) for(int j=0; j<n; ++j){
    if (j + i > n) break;
    int s = accumulate(w + j, w + j + i, 0);
    for(int k=j; k<j + i + 1; ++k){
      dp[j][j+i] = min(dp[j][j + i], s + dp[j][k] + dp[k][j + i]);
    }
  }
 
  cout << dp[0][n] << endl;
}

