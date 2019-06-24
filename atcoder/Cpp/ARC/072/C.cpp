#include <iostream>
#include <vector>
using namespace std;
#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];


    int ans1 = 0;
    /**
     * 0 => +
     * 1 => -
     */
    int f = 0;
    int t = 0;
    t = v[0];
    if(t<=0) {
        ans1 += abs(t-1);
        t = 1;
    }
    for(int i=1; i<v.size(); ++i) {
        if(f==0 && t+v[i]>=0) {
            ans1 += abs(t+v[i])+1;
            t = -1;
        }
        else if(f==1 && t+v[i]<=0) {
            ans1 += abs(t+v[i])+1;
            t = 1;
        }
        else t += v[i];
        f = (f+1)%2;
    }

    int ans2 = 0;
    /**
     * 0 => +
     * 1 => -
     */
    f = 1;
    t = 0;
    t = v[0];
    if(t>=0) {
        ans2 += t+1;
        t = -1;
    }
    for(int i=1; i<v.size(); ++i) {
        if(f==0 && t+v[i]>=0) {
            ans2 += abs(t+v[i])+1;
            t = -1;
        }
        else if(f==1 && t+v[i]<=0) {
            ans2 += abs(t+v[i])+1;
            t = 1;
        }
        else t += v[i];
        f = (f+1)%2;
    }
    cout << min(ans1, ans2) << endl;
}
