#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 0;
    int x = 0;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        if(a%2!=0) c++;
        if(a%4==0) x++;
    }
    if(c==0) cout << "Yes" << endl;
    else {
        if(x>=c) cout << "Yes" << endl;
        else if(n%2!=0&&x+1>=c) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

