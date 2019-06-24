#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

long long int fib(long long int n) {
    return n!=1&&n!=2?fib(n-1)+fib(n-2):n;
}

int main() {
    long long int i = 1;
    while(true) {
        cout << fib(i) << endl;
        i++;
    }
}
