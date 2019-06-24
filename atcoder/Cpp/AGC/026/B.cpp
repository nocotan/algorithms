#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
  int t;
  cin >> t;
  for(int j=0; j<t; ++j) {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    int f = 1;
    for(int i=0; i<500000; ++i) {
      if(a<b) {
        f--;
        break;
      }
      a -= b;
      if(a<=c) a += d;
    }
    if(f) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}

