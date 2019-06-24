#include <iostream>
using namespace std;

double memo[101][101];
auto main() -> int {
    int x1, y1, r;
    cin >> x1 >> y1 >> r;
    int x2, y2, x3, y3;
    cin >> x2 >> y2 >> x3 >> y3;
    if(x1-r+1>=x2&&x1+r-1<=x3&&y1-r+1>=y2&&y1+r-1<=y3) {
        cout << "NO" << endl;
        cout << "YES" << endl;
    }
    else if(x1-r+1<x2&&x1+r-1>x3&&y1-r+1<y2&&y1+r-1>y3) {
        cout << "YES" << endl;
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        cout << "YES" << endl;
    }
}

