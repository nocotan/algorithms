#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<double,double>> v;
    for(int i=0; i<n; ++i) {
        double a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    int ans = 0;
    for(int i=0; i<n; ++i) {
        for(int j=i+1; j<n; ++j) {
            for(int k=j+1; k<n; ++k) {
                auto a = v[i];
                auto b = v[j];
                auto c = v[k];
                int s = abs(a.second*(b.first-c.first)+b.second*(c.first-a.first)+c.second*(a.first-b.first));
                if(s!=0&&s%2==0) ans++;
            }
        }
    }
    cout << ans << endl;
}
