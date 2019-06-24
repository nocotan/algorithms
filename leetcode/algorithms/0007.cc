#include <algorithm>
using namespace std;


class Solution {
    public:
    int reverse(int x) {
        long long ans = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            ans = ans * 10 + pop;
        }

        if (abs(ans) > __INT32_MAX__) return 0;
        else return ans;
    }
};