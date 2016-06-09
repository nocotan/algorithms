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


vector<vi> m_sort(vector<vi> v) {
  vector<vi> res;
  while(v.size() > 0) {
    int tmp = 0, index = 0;
    ret(i, v.size()) {
      if (v[i][0] >= tmp) {
        tmp = v[i][0];
        index = i;
      }
    }
    res.push_back(v[index]);
    v.erase(v.begin() + index);
  }
  return res;
}

int main() {
  int N;
  cin >> N;

  vector<vi> v(N+1, vi(2, 0));

  rep(i,N) cin >> v[i][0] >> v[i][1];

  v = m_sort(v);
  ret(i, N) cout << v[i][0] << endl;
}
