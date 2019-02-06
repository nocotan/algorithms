#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m;
  cin >> n >> m;
  vector<int> x(m);
  for(int i=0; i<m; ++i) cin >> x[i];

  sort(x.begin(), x.end());

  vector<int> diff(m-1);
  for(int i=0; i<m-1; ++i) diff[i] = x[i+1] - x[i];
  sort(diff.begin(), diff.end());

  int ans = 0;
  for(int i=0; i<m-n; ++i) ans += diff[i];

  if(n < m) cout << ans << endl;
  else cout << 0 << endl;


}
