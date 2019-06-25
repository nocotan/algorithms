#include <string>
#include <vector>
using namespace std;


class Solution {
    public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        else if (strs.size() == 1) return strs[0];

        string prefix = "";
        int n = strs[0].size();
        int m = strs[1].size();

        for (int i=0; i<min(n, m); ++i) {
            if (strs[0][i] == strs[1][i]) {
                prefix += strs[0][i];
            } else {
                break;
            }
        }

        int N = strs.size();
        for (int i=2; i<N; ++i) {
            string tmp = "";
            for (int j=0; j<min(prefix.size(), strs[i].size()); ++j) {
                if (strs[i][j] == prefix[j]) {
                    tmp += prefix[j];
                } else {
                    break;
                }
            }
            prefix = tmp;
        }

        return prefix;
    
        }
};