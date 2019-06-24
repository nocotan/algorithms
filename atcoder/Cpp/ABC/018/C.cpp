#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int u[500][500], d[500][500];
char s[500][500];
 
int main() {
  int R, C, K;
  scanf("%d %d %d", &R, &C, &K);
  for ( int i = 0; i < R; i++ ) scanf("%s", s[i]);
  
  int cnt;
  for( int i = 0; i < C; i++ ) {
    cnt = 0;
    for ( int j = 0; j < R; j++ ) {
      if ( s[j][i] != 'x' ) cnt++;
      else cnt = 0;
      u[j][i] = cnt;
    }
  }
 
  for ( int i = 0; i < C; i++) {
    cnt = 0;
    for ( int j = R - 1; j >= 0; j-- ) {
      if ( s[j][i] != 'x' ) cnt++;
      else cnt = 0;
      d[j][i] = cnt;
    }
  }
 
  int ans = 0;
  bool check;
  for ( int i = K-1; i <= R - K; i++ ) {
    for ( int j = K-1; j <= C - K; j++ ) {
      check = true;
      for ( int k = 0; k < K; k++ ) {
        if ( u[i][j+k] < K - k || u[i][j-k] < K - k || d[i][j+k] < K - k || d[i][j-k] < K - k ) check = false;
      }
      if ( check ) ans++;
    }
  }
 
  printf("%d\n", ans);
 
  return 0;
 
}
