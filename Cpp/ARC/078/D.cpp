//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> g[100005];
int c[100005];
int c2[100005];
pair<int,int> c3[100005];

int memo[100005];

vector<int> black;
vector<int> white;

auto main() -> signed {
    int n;
    cin >> n;
    for(int i=0; i<n-1; ++i) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    c[1] = 1;
    c[n] = 2;
    c2[1] = 1;
    c2[n] = 2;
    black.push_back(1);
    white.push_back(n);

    int b = 0;
    queue<pair<int,int>> q;
    q.push(make_pair(1, 0));
    while(!q.empty()) {
        auto p = q.front();
        q.pop();
        int t = p.first;
        b++;
        c[t] = 1;
        for(int i=0; i<g[t].size(); ++i) {
            if(c[g[t][i]]!=0) continue;
            c3[g[t][i]].first = p.second+1;
            q.push(make_pair(g[t][i], p.second+1));
        }
    }

    int w = 0;
    queue<pair<int, int>> q2;
    q2.push(make_pair(n,0));
    while(!q2.empty()) {
        auto p = q2.front();
        q2.pop();
        int t = p.first;
        w++;
        c2[t] = 2;
        for(int i=0; i<g[t].size(); ++i) {
            if(c2[g[t][i]]!=0) continue;
            c3[g[t][i]].second = p.second+1;
            q2.push(make_pair(g[t][i], p.second+1));
        }
    }

    int mb = 0;
    int mw = 0;
    int tmp = 0;
    for(int i=1; i<=n; ++i) {
        auto p = c3[i];
        if(p.first==0||p.second==0) continue;
        if(p.first <= p.second) mb++;
        else mw++;
    }

    b -= mw;
    w -= mb;

    if(b>w) cout << "Fennec" << endl;
    else cout << "Snuke" << endl;
    return 0;
}

