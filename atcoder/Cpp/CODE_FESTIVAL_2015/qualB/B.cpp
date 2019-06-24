#include <iostream>
using namespace std;

int memo[100000000];

int main() {
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        memo[a]++;
    }

    int ans = 0;
    int tmp = -1;
    for(int i=0; i<=m; ++i) {
        if(memo[i]>tmp) {
            ans = i;
            tmp = memo[i];
        }
    }
    if(tmp>n/2) cout << ans << endl;
    else cout << '?' << endl;
}
