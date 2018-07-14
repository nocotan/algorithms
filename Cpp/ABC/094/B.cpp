//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

auto main() -> signed {
  int n, m, x;
  cin >> n >> m >> x;
  int V[n+1] = {0};
  for(int i=0; i<m; ++i) {
    int a;
    cin >> a;
    V[a]++;
  }

  int ans1 = 0;
  int ans2 = 0;
  int t = x;
  while(true) {
    if(t==0) break;
    if(V[t]) ans1++;
    t--;
  }
  t = x;
  while(true) {
    if(t==n) break;
    if(V[t]) ans2++;
    t++;
  }
  cout << min(ans1, ans2) << endl;
  return 0;
}

