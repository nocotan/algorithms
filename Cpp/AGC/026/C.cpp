#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;
string s;

int dp(int j, vector<int> v) {
  int res = 0;
  if(j>2*n) return 0;
  if(v.size() == n) {
    string t1 = "", t2 = "";
    for(int i=0; i<2*n; ++i) {
      if(find(v.begin(), v.end(), i) == v.end()) {
        t2 += s[i];
      } else t1 += s[i];
      cout << t1 << " " << t2 << endl;
    }
  }
  res += dp(j+1, v);
  v.push_back(j);
  res += dp(j+1, v);
  return res;
}

signed main() {
  cin >> n;
  cin >> s;

  vector<int> v;
  int ans = dp(0, v);
  cout << ans << endl;
  return 0;
}
