//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
  string s;
  cin >> s;

  int ans = 700;
  for(int i=0; i<s.size(); ++i) {
    if(s[i]=='o') ans+=100;
  }
  cout << ans << endl;
  return 0;
}

