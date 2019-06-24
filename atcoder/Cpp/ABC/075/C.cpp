#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAX_N = 50;
int n, m;
int a[MAX_N], b[MAX_N];

bool graph[MAX_N][MAX_N];
bool visited[MAX_N];

void dfs(int v) {
    visited[v] = true;
    for(int v2=0; v2<n; ++v2) {
        if(!graph[v][v2]) continue;
        if(visited[v2]) continue;
        dfs(v2);
    }
}

signed main() {
    cin >> n >> m;
    for(int i=0; i<m; ++i) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }
    int ans = 0;
    for(int i=0; i<m; ++i) {
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = false;
        for(int j=0; j<n; ++j) visited[j] = false;
        dfs(0);
        bool bridge = false;
        for(int j=0; j<n; ++j) if(!visited[j]) bridge = true;
        if(bridge) ans++;
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }
    cout << ans << endl;
    return 0;
}

