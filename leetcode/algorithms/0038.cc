#include <string>
using namespace std;


class Solution {
    public:
    string countAndSay(int n) {
        string ans = "1";
        for (int i=1; i<n; ++i) {
            string next_seq = "";
            int count = 1;
            for (int j=0; j<ans.size()-1; ++j) {
                if (ans[j] != ans[j+1]) {
                    next_seq += '0' + count;
                    next_seq += ans[j];
                    count = 1;
                } else {
                    ++count;
                }
            }

            next_seq += '0' + count;
            next_seq += ans[ans.size()-1];
            ans = next_seq;
        }

        return ans;
    }
};