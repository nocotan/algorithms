#include <bits/stdc++.h>
using namespace std;


int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int K;
  cin >> K;

  vector<int> v({A, B, C});
  sort(v.begin(), v.end());

  int ans = v[0] + v[1] + (v[2] * pow(2, K));
  cout << ans << endl;

  return 0;
}
