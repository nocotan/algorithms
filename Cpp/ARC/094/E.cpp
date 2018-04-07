#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for(int i=0; i<n; ++i) cin >> A[i] >> B[i];

    vector<pair<int, int>> q1;
    vector<pair<int, int>> q2;
    for(int i=0; i<n; ++i) {
        int diff = A[i] - B[i];
        if(diff <= 0) {
            q1.push_back(make_pair(i, abs(diff)));
            if(diff != 0) {
                q2.push_back(make_pair(i, abs(diff)));
            }
        }
    }

    int a = 0;
    int b = 0;
    int ans = 0;
    while(true) {
        if(A==B) {
            cout << ans << endl;
            return 0;
        }

        int i = q1[a].first;
        q1[a].second = abs(A[i] - B[i]);
        if(A[i] > 0) {
            A[i]--;
        }
        if(A[i]==0) ++a;

        i = q2[b].first;
        q2[b].second = abs(A[i] - B[i]);
        if(q2[b].second >0) {
            B[i]--;
        }

        ans++;
    }
    return 0;
}

