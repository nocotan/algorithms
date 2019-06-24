#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a;
    cin >> a;

    vector<int> v;
    int tmp = 1;
    for(int i=0; i<n-1; ++i) {
        int b;
        cin >> b;
        if(a<b) tmp++;
        else {
            v.push_back(tmp);
            tmp = 1;
        }
        a = b;
    }
    v.push_back(tmp);

    int ans = 0;
    for(int i=0; i<v.size(); ++i) {
        if(v[i]==k) ans++;
        else if(v[i]>k) {
            ans += 1+v[i]-k;
        }
    }
    cout << ans << endl;
}
