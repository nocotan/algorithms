#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; ++i) cin >> v[i];

  int ans = 0;
  for(int i=0; i<n; ++i) {
    int t = 0;
    for(int j=i; j<n; ++j) {
      t += v[j];
      if(t==0) ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}

