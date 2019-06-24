#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int h, w;
int c[101][101];
int s[101][101];

int main() {
    cin >> h >> w;
    for(int i=0; i<h; ++i) {
        for(int j=0; j<w; ++j) cin >> c[i][j];
    }
    for(int i=1; i<=h; ++i) {
        for(int j=1; j<=w; ++j) {
            if((i+j)%2) s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]-c[i-1][j-1];
            else s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+c[i-1][j-1];
        }
    }

    int ans = 0;
    for(int i=0; i<h; ++i) {
        for(int j=0; j<w; ++j) {
            for(int k=i+1; k<=h; ++k) {
                for(int l=j+1; l<=w; ++l) {
                    if(s[k][l]-s[k][j]-s[i][l]+s[i][j]==0) {
                        ans = max(ans, (k-i)*(l-j));
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
