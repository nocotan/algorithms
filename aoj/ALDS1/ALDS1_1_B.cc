#include <iostream>
using namespace std;


int gcd(int a, int b) {
    if (a < b) return gcd(b, a);
    int c;
    while (a%b) {
        c = a%b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}