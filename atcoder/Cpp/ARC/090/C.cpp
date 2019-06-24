#include <bits/stdc++.h>
using namespace std;

#define int long long

int G[2][100];

int dx[]{0, 1};
int dy[]{1, 0};

signed main() {
    int n;
    cin >> n;
    for(int i=0; i<2; ++i) {
        for(int j=0; j<n; ++j) cin >> G[i][j];
    }

    queue<pair<int, pair<int,int>>> que;
    que.push(make_pair(G[0][0], make_pair(0, 0)));
    int ans = -1;
    while(!que.empty()) {
        auto p = que.front(); que.pop();
        int ame = p.first;
        int x = p.second.first;
        int y = p.second.second;
        if(y==n-1&&x==1) {
            ans = max(ame, ans);
            continue;
        }
        for(int i=0; i<2; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx<2&&ny<n)
                que.push(make_pair(ame+G[nx][ny], make_pair(nx, ny)));
        }
    }
    cout << ans << endl;
    return 0;
}

