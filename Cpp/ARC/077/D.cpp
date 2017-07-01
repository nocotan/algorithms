//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;
vector<int> a;

int res = 0;
int memo[100001];
int dp[100001][100001];
auto solve(int k, int j, string s) -> void {
    if(j==n+1) return;
    if(s.size()>=k) return;
    for(int i=j; i<a.size(); ++i) {
        string t = s + to_string(a[i]);
        if(t.size()==k&&memo[stoi(t)]==0) {
            res++;
            memo[stoi(t)]++;
        }
        solve(k, i+1, s);
        solve(k, i+1, t);
        dp[k][i] = res;
    }
}

auto main() -> signed {
    cin >> n;
    for(int i=0; i<n+1; ++i) {
        int b;
        cin >> b;
        a.push_back(b);
    }
    for(int k=1; k<=n+1; ++k) {
        res = 0;
        solve(k,0,"");
        cout << res%1000000007 << endl;
    }
    return 0;
}

