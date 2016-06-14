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
#define REP(i, x, n) for(auto i=x; i<n; i++)
#define rep(i, n) REP(i, 0, n)
#define RET(i, x, n) for(auto i=x; i<=n; i++)
#define ret(i, n) REP(i, 0, n)
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

const ll mod = 1e9+7;

ll modpow(ll a, ll b, ll p) {
  ll sum = 1;
  while (b > 0) {
    if ((b&1)==1) sum = (sum * a) % p;
    a = (a * a) % p;
    b >>= 1;
  }
  return sum;
}

ll fact(int n) {
  ll a = n;
  for(int i=n-1; i>0; i--) a = (a * i) % mod;
  return a;
}

ll nCr(int n, int r) {
  return (fact(n) * modpow((fact(n-r)*fact(r)%mod), mod-2, mod)) % mod;
}

int main() {
  int w, h;
  cin >> w >> h;
  if(w < h) {
    int t = w;
    w = h;
    h = t;
  }
  cout << nCr(w+h-2, h-1) << endl;
}
