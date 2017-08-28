//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int G[100001] = {0};
int memo[100001] = {0};

signed main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > v(n+1);
    for(int i=0; i<m; ++i) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;
    vector<vector<int> > t;
    for(int i=0; i<q; ++i) {
        int vq, d, c;
        cin >> vq >> d >> c;
        vector<int> tmp;
        tmp.push_back(vq);
        tmp.push_back(d);
        tmp.push_back(c);
        t.push_back(tmp);
    }
    for(int i=t.size()-1; i>=0; --i) {
        vector<int> tmp = t[i];
        int vq = tmp[0];
        int d = tmp[1];
        int c = tmp[2];
        if(memo[vq]==0) {
            G[vq] = c;
            memo[vq]++;
        }

        // bfs
        queue<pair<int, int> > que;
        que.push(make_pair(vq, 0));
        int ans = 0;
        while(!que.empty()) {
            pair<int, int> p = que.front();
            que.pop();
            vector<int> target = v[p.first];
            if(p.second>=d) break;
            for(int i=0; i<target.size(); ++i) {
                if(memo[target[i]]!=0) continue;
                que.push(make_pair(target[i], p.second+1));
                G[target[i]] = c;
            }
            memo[p.first]++;
        }
    }
    for(int i=1; i<=n; ++i) cout << G[i] << endl;
    return 0;
}

