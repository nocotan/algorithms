#include <bits/stdc++.h>
using namespace std;

int dl[]{0, 1};
int dr[]{-1, 0};

set<pair<int, int>> memo;

signed main() {
  int n;
  cin >> n;
  vector<int> A(n);
  vector<int> SUM(n);
  vector<int> XORSUM(n);
  for(int i=0; i<n; ++i) cin >> A[i];

  SUM[0] = A[0];
  XORSUM[0] = A[0];
  for(int i=1; i<n; ++i) {
    SUM[i] = SUM[i-1] + A[i];
    XORSUM[i] = XORSUM[i-1] ^ A[i];
  }

  int ans = n;
  for(int l=0; l<n-1; ++l) {
    for(int r=n-1; r>0; --r) {
      if(l==r) break;
      int sum = SUM[r] - SUM[l-1];
      if(l==0) sum = SUM[r];
      int xorsum = XORSUM[r] ^ XORSUM[l-1];
      if(l==0) xorsum = XORSUM[r];
      if(xorsum == sum) {
        ans++;
      }
      if(sum < xorsum) {
        break;
      }
    }
  }

  cout << ans << endl;
  return 0;
}

