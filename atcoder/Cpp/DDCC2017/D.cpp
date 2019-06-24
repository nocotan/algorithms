#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<vector<int>> m(201, vector<int>(201));
int h, w;
int a, b;

vector<pair<int, int>> v;
int memo2[200*200];

int kohuku(vector<vector<int>> memo) {
    int res = 0;
    int f1 = 0;
    int f2 = 0;
    for(int i=0; i<=h/2; ++i) {
        for(int j=0; j<=w/2; ++j) {
            int ni = h-1-i;
            int nj = w-1-j;
            if(memo[i][j]!=memo[ni][j]) f1++;
            if(memo[i][j]!=memo[i][nj]) f2++;
            if(f1&&f2) break;
        }
        if(f1&&f2) break;
    }
    if(!f1) res += a;
    if(!f2) res += b;
    return res;
}

signed main() {
    cin >> h >> w;
    cin >> a >> b;
    for(int i=0; i<h; ++i) {
        for(int j=0; j<w; ++j) {
            char c;
            cin >> c;
            if(c=='S') {
                m[i][j] = 1;
                v.push_back(make_pair(i,j));
            }
            else m[i][j] = 0;
        }
    }

    int ans = -1;
    int ra = 0;
    do {
        vector<vector<int>> memo = m;
        int tmp = 0;
        int bt = 0;
        for(int i=0; i<v.size(); ++i) {
            auto p = v[i];
            int x = p.first;
            int y = p.second;
            memo[x][y] = 0;
            tmp += kohuku(memo);
        }
        ra++;
        ans = max(ans, tmp);
        if(ra>=10) break;
    } while(next_permutation(v.begin(), v.end()));
    cout << ans << endl;
    return 0;
}

