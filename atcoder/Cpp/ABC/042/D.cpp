//#define _GRIBCXX_DEBUG
#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iostream>
#include <iomanip>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <string>
#include <utility>
#include <vector>
using namespace std;


// 基本テンプレート
#define rep(i,n) for(int i=0; i<(int)n; ++i)
#define REP(i,x,n) for(int i=x; i<(int)n; ++i)
#define repi(i,n) for(int i=0; i<=(int)n; ++i)
#define REPI(i,x,n) for(int i=x; i<=(int)n; ++i)
#define FOR(i,c) for(__typeof((c).begin())!=(c).begin(); i!=(c).end(); ++i)
#define ALL(c) (c).begin(), (c).end()

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<double> vd;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<long, long> pil;


// Effective std
template<typename C, typename T>
constexpr int count(C& c, T t) { return count(ALL(c), t); }

template<typename C, typename F>
constexpr int count_if(C& c, F f) { return count_if(ALL(c), f); }

template<typename C, typename T, typename U>
constexpr void replace(C& c, T t, U u) { replace(ALL(c), t, u); }

template<typename C, typename F, typename U>
constexpr void replace_if(C& c, F f, U u) { (ALL(c), f, u); }

template<typename C>
constexpr void sort(C& c) { sort(ALL(c)); }

template<typename C, typename Pred>
constexpr void sort(C& c, Pred p) { sort(ALL(c), p); }


// グラフテンプレート
typedef int Weight;

struct Edge {
  int src, dst;
  Weight weight;
  Edge(int src, int dst, Weight weight) :
    src(src), dst(dst), weight(weight) {}
};

bool operator < (const Edge &e, const Edge &f) {
  return e.weight != f.weight ? e.weight > f.weight :
    e.src != f.src ? e.src < f.src : e.dst < f.dst;
}

typedef vector<Edge> Edges;
typedef vector<Edges> Graph;
typedef vector<Weight> Array;
typedef vector<Array> Matrix;

const ll  MOD = 1000000007;
 
ll ans=0;
ll k_table[200100];
ll pow(ll x, ll n){
  ll ret = 1;
  while(n>0){
    if(n & 1){
      ret = (ret * x) % MOD;
    }
    x = (x*x) % MOD;
    n >>= 1;
  }
  return ret;
}
int main(){
  ll H,W,A,B;
  cin >> H >> W >> A >> B;
  H--;
  W--;
  A--;
  B--;
  k_table[0] = 1;
  for(ll i=1;i<=200000;i++){
    k_table[i] = (k_table[i-1] * i) % MOD;
  }
  ll hab = k_table[(H-A)+B];
  ll wab = k_table[A+(W-B)];
  ll m = min(W-B,H-A);
  for(ll i=0;i<m;i++){
    //cout << (hab*h_ab)%MOD << endl;
    //cout << (wab*w_ab)%MOD << endl;
    ll h_ab = pow( (k_table[H-A-1-i]*k_table[B+1+i])%MOD , MOD-2);
    ll w_ab = pow( (k_table[A+1+i]*k_table[W-B-1-i])%MOD , MOD-2);
    ans = (ans + (((hab*h_ab)%MOD) * ((wab*w_ab)%MOD))%MOD)%MOD;
  }
  cout << ans << endl;
}
