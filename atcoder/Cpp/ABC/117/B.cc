#include <bits/stdc++.h>
using namespace std;


int main() {
  int N;
  cin >> N;

  vector<int> v(N);
  for(int i=0; i<N; ++i) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());


  int L = v[N-1];
  int sum = 0;
  for(int i=0; i<N-1; ++i) {
    sum += v[i];
  }
  if(sum > L) cout << "Yes" << endl;
  else cout << "No" << endl;
}
