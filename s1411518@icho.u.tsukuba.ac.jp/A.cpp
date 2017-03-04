//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

// 基本テンプレート
#pragma region MACRO
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define PED cout << "\n"
#define rep(i,n) for(int i=0; i<(int)n; ++i)
#define REP(i,x,n) for(int i=x; i<(int)n; ++i)
#define repi(i,n) for(int i=0; i<=(int)n; ++i)
#define REPI(i,x,n) for(int i=x; i<=(int)n; ++i)
#define ILP while(true)
#define FOR(i,c) for(__typeof((c).begin())!=(c).begin(); i!=(c).end(); ++i)
#define ALL(c) (c).begin(), (c).end()
#define mp make_pair
#pragma endregion

// 型
#pragma region TYPE_DEF
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, string> pss;
typedef pair<string, int> psi;
typedef pair<int, string> pis;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long double> vld;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<string> vs;
#pragma endregion

// Effective std
#pragma region ESTD
template<typename C, typename T> int count(C& c, T t) { return count(ALL(c), t); }
template<typename C, typename F> int count_if(C& c, F f) { return count_if(ALL(c), f); }
template<typename C, typename T> void erase(C& c, T t) { remove(ALL(c), t), c.end(); }
template<typename C> void remove(vector<C>& c, unsigned int index) { c.erase(c.begin()+index); }
template<typename C, typename T, typename U> void replace(C& c, T t, U u) { replace(ALL(c), t, u); }
template<typename C, typename F, typename U> void replace_if(C& c, F f, U u) { (ALL(c), f, u); }
template<typename C> void reverse(C& c) { reverse(ALL(c)); }
template<typename C> void sort(C& c) { sort(ALL(c)); }
template<typename C, typename Pred> void sort(C& c, Pred p) { sort(ALL(c), p); }
#pragma endregion

// 定数
#pragma region CONST_VAL
constexpr int PI = (2*acos(0.0));
constexpr int EPS = (1e-9);
constexpr int MOD = (int)(1e9+7);
constexpr int INF = 100000000;
#pragma endregion

ll h, w, k;
int v[51][51];
int memo[51][51];
vector< vector<int> > ans;

void solve(int x, int y) {
    if(v[x][y] == INF || v[x][y] == 0 || memo[x][y] == 0) return;

    vi tmp;
    int tmp_memo[51][51] = {{0}};
    REP(i,y,50) {
        if(tmp.size() >= 8) break;
        REP(j,x,50) {
            if(v[i][j] != 0 && memo[i][j] != 0){
                tmp.push_back(v[i][j]);
                memo[i][j] = 1;
                tmp_memo[i][j] = 1;

            }
            else continue;
        }
    }

    if(tmp.size() == 8) ans.push_back(tmp);
    else {
        REP(i,x,50) {
            REP(j,y,50) {
                if(tmp_memo[i][j]==1) memo[i][j] = 0;
            }
        }
    }
}

int main()
{
    rep(i, 51)
        rep(j,51) {
            v[i][j] = INF;
            memo[i][j] = 0;
        }

    cin >> h >> w >> k;
    rep(i,50) {
        rep(j, 50) {
            string s;
            cin >> s;
            rep(k, s.size()) {
                v[i][j] = s[k] - '0';
            }
        }
    }

    rep(x, 50) {
        rep(y, 50) {
            solve(x, y);
        }
    }

    P(ans.size());
    rep(i,ans.size()) {
        rep(j,8) cout << i << " " << j << endl;
    }

    return 0;
}

