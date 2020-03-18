#include <algorithm>
#include <vector>
using namespace std;


class Solution {
    public:
        vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
            vector<int> sorted = nums;
            sort(sorted.begin(), sorted.end());

            vector<int> ans;
            for(int i=0; i<nums.size(); ++i) {
                int k = 0;
                for (int j=0; sorted[j]<nums[i]; ++j) ++k;
                ans.push_back(k);
            }

            return ans;
        }
};