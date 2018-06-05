#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
  int a, b, x;
  cin >> a >> b >> x;
  if (a == x || a<x && a+b >= x) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}

