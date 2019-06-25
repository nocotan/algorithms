#include <string>
using namespace std;


class Solution {
    public:
    int lengthOfLastWord(string s) {
        if (s.size() < 1) return 0;

        int ans = 0;
        for (int i=s.size()-1; i>=0; --i) {
            if (s[i] == ' ' && ans > 0) break;
            if (s[i] != ' ') ++ans;
        }

        return ans;
    }
};