#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; ++i) cin >> v[i];
  int ans = 0;
  for(int i=0; i<n-1; ++i) {
    if(v[i]==v[i+1]) {
      ans++;
      i++;
    }
  }
  cout << ans << endl;
  return 0;
}

