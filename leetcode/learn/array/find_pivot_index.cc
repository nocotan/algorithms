#include <vector>
using namespace std;

class Solution {
    public:
    int pivotIndex(vector<int>& nums) {
        if (nums.size() < 1) return -1;

        int lh = 0;
        int rh = 0;
        for (int i=1; i<nums.size(); ++i) rh += nums[i];
        for (int i=0; i<nums.size()-1; ++i) {
            if (lh == rh) return i;
            lh += nums[i];
            rh -= nums[i+1];
        }

        if (lh == rh) return nums.size() - 1;
        else return -1;
    }
};