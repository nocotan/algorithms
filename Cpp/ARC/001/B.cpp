#include <iostream>
using namespace std;

auto main() -> int {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    while(true) {
        if(a==b) break;
        if(abs(b-a)>=8) {
            if(a<b) a+=10;
            else a-=10;
        }
        else if(abs(b-a)>=3) {
            if(a<b) a+=5;
            else a-=5;
        }
        else {
            if(a<b) a++;
            else b++;
        }
        ans++;
    }
    cout << ans << endl;
}
