//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
int N, M;
int main() {
    cin >> N >> M;
    if (N - M <= -2 || 2 <= N - M) cout << 0 << endl;
    else {
        int ret = 1;
        for (int i = 1; i <= N; i++) ret = 1LL * ret * i % mod;
        for (int i = 1; i <= M; i++) ret = 1LL * ret * i % mod;
        cout << ret * (N - M == 0 ? 2 : 1) % mod << endl;
    }
    return 0;
}
