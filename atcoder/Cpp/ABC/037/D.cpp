#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cctype>
#include <climits>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include <utility>
#include <complex>
#include <memory>
#include <functional>
using namespace std;

#define ALL(g) (g).begin(), (g).end()
#define REP(i, x, n) for(int i=x; i<n; i++)
#define rep(i, n) REP(i, 0, n)
#define F(i, j, k) fill(i[0], i[0]+j*j, k)
#define P(p) cout << (p) << endl;
#define EXIST(s, e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define pb push_back

typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int, int> pii;
typedef vector<long, long> pil;
typedef long long ll;

#define mod 1000000007
int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
int number[1002][1002] = {};
ll dp[1002][1002] = {};
int H, W;


ll route(int y, int x) {
  if(dp[y][x]) return dp[y][x];
  if(y==0 || y==H+1 || x==0 || x==W+1) return 0;
  dp[y][x] = 1;
  rep(i, 4)
    if(number[y][x] > number[y+dy[i]][x+dx[i]])
      dp[y][x] += route(y+dy[i], x+dx[i]);
  return dp[y][x] %= mod;
}

int main() {
  ll sum = 0;
  cin >> H >> W;
  REP(y, 1, H+1) REP(x, 1, W+1) cin >> number[y][x];
  REP(y, 1, H+1) REP(x, 1, W+1) sum += route(y, x);
  cout << sum%mod << endl;

  return 0;
}
