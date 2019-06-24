#include <bits/stdc++.h>
using namespace std;

int N;
int score(int b, vector<int> A) {
  int ans = 0;
  for(int i=0; i<N; ++i) {
    ans += abs((A[i]-(b+i)));
  }
  return ans;
}

signed main() {
  cin >> N;
  vector<int> A(N);
  for(int i=0; i<N; ++i) cin >> A[i];

  vector<int> T(N);
  int sum = 0;
  int sum2 = 0;
  for(int i=0; i<N; ++i) {
    int a = A[i];
    T[i] = a - (i+1);
    sum += T[i];
    sum2 += abs(T[i]);
  }
  int ans = sum2;
  if(sum==0) {
    cout << sum2 << endl;
    return 0;
  }
  if(sum>0) {
    int l = 0;
    int r = sum;
    while(l!=r) {
      int i = (r - l) / 2;
      int t = score(i, A);
      if(ans == t) break;
      if(ans >= t) {
        ans = t;
        l = i;
      }
      else {
        r = i;
      }
    }
    cout << ans << endl;
  } else {
    int l = sum;
    int r = 0;
    while(l!=r) {
      int i = (l - r) / 2;
      int t = score(i, A);
      if(ans == t) break;
      if(ans >= t) {
        ans = t;
        r = i;
      }
      else {
        l = i;
      }
    }
    cout << ans << endl;
  }
  return 0;
}

