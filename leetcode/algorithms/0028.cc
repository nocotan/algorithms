#include <string>
using namespace std;


class Solution {
    public:
    int strStr(string haystack, string needle) {
        int n_size = needle.size();
        int h_size = haystack.size();

        if (n_size < 1) return 0;

        for (int i=0; i+n_size<=h_size; ++i) {
            string tmp = haystack.substr(i, n_size);
            if (tmp == needle) return i;
        }

        return -1;
    }
};