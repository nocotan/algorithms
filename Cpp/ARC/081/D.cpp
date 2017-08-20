//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<string> G;

int dx[]{0, 1, 0, -1};
int dy[]{1, 0, -1, 0};

int graph[52][52];

int mod = 1000000007;
signed main() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    if(n==1) {
        cout << 3 << endl;
        return 0;
    }
    G.push_back(s1);
    G.push_back(s2);

    int cnt = 0;
    int ans = 6;
    int i = 0;
    if(s1[i]==s2[i]) {
        i++;
        cnt = 1;
        ans = 3;
    }
    else {
        ans = 6;
        cnt = 2;
        i += 2;
    }
    for(int j=i; j<n; ++j) {
        if(s1[j]==s2[j]) {
            cnt++;
            if(cnt==2) {
                ans = (ans*2)%mod;
                cnt = 1;
            }
            else if(cnt==3) {
                cnt = 1;
            }
        } else {
            cnt += 2;
            j++;
            if(cnt==3) {
                ans = (ans*2)%mod;
                cnt = 2;
            }
            else if(cnt==4) {
                ans = (ans*3)%mod;
                cnt = 2;
            }
        }
    }
    cout << (ans)%mod << endl;

    return 0;
}

