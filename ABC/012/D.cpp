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
#define PI (2*acos(0.0))
#define EPS (1e-9)
#define MOD (int)(1e9+7)
constexpr int INF = 100000000;
#pragma endregion


typedef std::vector< std::vector<int> > AdjMatrix;

void warshall_floyd(int n, AdjMatrix& adj_matrix) {
    rep(k, n) {
        rep(i, n) {
            rep(j, n){
                adj_matrix[i][j] = min(adj_matrix[i][j], adj_matrix[i][k] + adj_matrix[k][j]);
        }}
    }
}

int solve(int n, AdjMatrix& adj_matrix) {
    warshall_floyd(n, adj_matrix);
    int ans = INF;
    rep(i, n) {
        auto itr = max_element(adj_matrix[i].begin(), adj_matrix[i].end());
        ans = min(ans, *itr);
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    AdjMatrix adj_matrix(n, vector<int>(n, INF));

    rep(i, n) adj_matrix[i][i] = 0;
    rep(j, m) {
        int a, b, t;
        cin >> a >> b >> t;
        a--;
        b--;
        adj_matrix[a][b] = t;
        adj_matrix[b][a] = t;
    }

    auto ans = solve(n, adj_matrix);
    P(ans);
    return 0;
}

