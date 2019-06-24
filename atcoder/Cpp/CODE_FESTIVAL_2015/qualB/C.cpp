#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0; i<n; ++i) cin >> a[i];
    for(int i=0; i<m; ++i) cin >> b[i];

    if(m>n) {
        cout << "NO" << endl;
        return 0;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int j = 0;
    for(int i=0; i<n; ++i) {
        if(b[j]<=a[i]) j++;
        if(j==m) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}
