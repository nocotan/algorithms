#include <algorithm>
#include <vector>
using namespace std;


class Solution {
    public:
    int dominantIndex(vector<int>& nums) {
        auto max_itr = max_element(nums.begin(), nums.end());
        int dist = distance(nums.begin(), max_itr);

        for (int i=0; i<nums.size(); ++i) {
            if (i == dist) continue;
            if (nums[i]*2 > *(max_itr)) return -1;
        }

        return dist;
    }
};