#include <bits/stdc++.h>
using namespace std;


int main() {
  int N;
  cin >> N;
  float ans = 0;
  for(int i=0; i<N; ++i) {
    float x;
    string u;
    cin >> x >> u;
    if(u == "JPY") ans += x;
    else ans += (x * 380000);
  }
  cout << ans << endl;

  return 0;
}
