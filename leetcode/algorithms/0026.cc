#include <vector>
using namespace std;


class Solution {
    public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() < 1) {
            return nums.size();
        }

        int i = 0;
        for (int j=1; j<nums.size(); ++j) {
            if (nums[i] != nums[j]) {
                ++i;
                nums[i] = nums[j];
            }
        }

        nums.erase(nums.begin()+i+1, nums.end());

        return nums.size();
    }
};