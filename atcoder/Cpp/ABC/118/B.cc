#include <bits/stdc++.h>
using namespace std;


int F[50];

int main() {
  int N, M;
  cin >> N >> M;
  for(int i=0; i<N; ++i) {
    int K;
    cin >> K;
    for(int j=0; j<K; ++j) {
      int a;
      cin >> a;
      ++F[a];
    }
  }

  int ans = 0;
  for(int i=0; i<M+1; ++i) {
    if(F[i] == N) ++ans;
  }

  cout << ans << endl;
  return 0;
}
