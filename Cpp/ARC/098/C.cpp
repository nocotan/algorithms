#include <bits/stdc++.h>
using namespace std;

signed main() {
  int n;
  string s;
  cin >> n >> s;
  int ans = 1e+9;

  vector<int> e(n);
  vector<int> w(n);
  if(s[0]=='W') w[0]++;
  else e[0]++;
  for(int i=1; i<n; ++i) {
    char c = s[i];
    if(c=='W') {w[i] = w[i-1] + 1; e[i] = e[i-1]; }
    else {e[i] = e[i-1] + 1; w[i] = w[i-1]; }
  }

  for(int i=0; i<n; ++i) {
    int E, W;
    E = w[i-1];
    if(i==0) E = 0;
    W = e[n-1] - e[i];
    ans = min(ans, E+W);
  }
  cout << ans << endl;
  return 0;
}

