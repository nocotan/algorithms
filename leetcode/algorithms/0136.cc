#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        stack<int> st;
        for (int i=0; i<nums.size(); ++i) {
            int val = nums[i];

            cout << st.size() << endl;
            if (!st.empty()) {
                if (st.top() == val) {
                    st.pop();
                    continue;
                }
            }

            st.push(val);
        }

        return st.top();
    }
};