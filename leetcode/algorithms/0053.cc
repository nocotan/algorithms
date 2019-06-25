#include <vector>
using namespace std;


class Solution {
    public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max = nums[0];
        for (int i=0; i<nums.size(); ++i) {
            sum += nums[i];
            if (nums[i] >= sum) sum = nums[i];
            max = max>sum ? max : sum;
        }

        return max;
    }
};