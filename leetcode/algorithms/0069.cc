#include <iostream>
#include <cmath>
using namespace std;

class Solution {
    public:
    int mySqrt(int x) {
        double x_n = 2;

        for (int i=0; i<1000; ++i) {
            x_n = x_n - f(x_n, x) / df(x_n, x);
        }

        return x_n;

    }

    double f(double x, int a) {
        return pow(x, 2) - a;
    }

    double df(double x, int a) {
        return (f(x+1e-6, a) - f(x, a)) / 1e-6;
    }
};

int main() {
    int x;
    cin >> x;

    Solution solution;
    cout << solution.mySqrt(x) << endl;
}