//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int h, w, k;

int dx[]{1, 0, -1, 0};
int dy[]{0, 1, 0, -1};

char field[801][801];
signed main()
{
    cin >> h >> w >> k;
    int sx;
    int sy;
    for(int i=0; i<h; ++i) {
        for(int j=0; j<w; ++j) {
            char c;
            cin >> c;
            if(c=='S') {
                sx = j;
                sy = i;
            }
            field[i][j] = c;
        }
    }

    int ans = 0;

    queue<pair<pair<int, int>, int> > que;
    vector<pair<int, int> > v;
    que.push(make_pair(make_pair(sx, sy), 0));
    while(true) {
        if(que.empty()) break;
        auto p = que.front();
        que.pop();
        int x = p.first.first;
        int y = p.first.second;
        if(p.second==k) {
            v.push_back(make_pair(x, y));
            continue;
        }
        for(int i=0; i<4; ++i) {
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if(nx>=0&&nx<w&&ny>=0&&ny<h) {
                if(field[nx][ny]=='#') v.push_back(make_pair(nx, ny));
                else if(field[nx][ny]=='.') que.push(make_pair(make_pair(nx, ny), p.second+1));
            }
        }
    }
    int min_dist = 1e+9;
    for(int i=0; i<v.size(); ++i) {
        min_dist = min(min_dist, min(v[i].first, w-1-v[i].first));
        min_dist = min(min_dist, min(v[i].second, h-1-v[i].second));
    }
    ans += min_dist/k;
    cout << ans << endl;
    return 0;
}

