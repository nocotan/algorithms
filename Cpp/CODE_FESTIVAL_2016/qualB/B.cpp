#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    int t = 0, tb = 0;
    for(int i=0; i<n; ++i) {
        char x = s[i];
        if(x=='c') {
            cout << "No" << endl;
        }
        else if(x=='a'&&t<a+b) {
            cout << "Yes" << endl;
            t++;
        }
        else if(x=='b'&&t<a+b&&tb<b){
            cout << "Yes" << endl;
            t++;
            tb++;
        }
        else {
            cout << "No" << endl;
        }
    }
}
