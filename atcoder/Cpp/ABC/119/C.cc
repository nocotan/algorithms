#include <bits/stdc++.h>
using namespace std;


int N, A, B, C;
int dfs(int cur, int a, int b, int c, vector<int> l) {
  if(cur == N) {
    return min({a, b, c}) > 0 ? abs(a - A) + abs(b - B) + abs(c - C) - 30 : 1e+9;
  }

  int res0 = dfs(cur + 1, a, b, c, l);
  int res1 = dfs(cur + 1, a + l[cur], b, c, l) + 10;
  int res2 = dfs(cur + 1, a, b + l[cur], c, l) + 10;
  int res3 = dfs(cur + 1, a, b, c + l[cur], l) + 10;

  return min({res0, res1, res2, res3});
}


int main() {
  cin >> N >> A >> B >> C;

  vector<int> l(N);
  for(int i=0; i<N; ++i) cin >> l[i];

  cout << dfs(0, 0, 0, 0, l) << endl;
}
