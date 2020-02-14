
#include <vector>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m==0 && n==0) return;
        if (m==0) {nums1 = nums2; return;}
        if (n==0) {nums2 = nums1; return;}

        vector<int> c;
        int i = 0;
        int j = 0;

        while (i<m && j<n) {
            if (nums1[i] < nums2[j]) {c.push_back(nums1[i]); ++i;}
            else {c.push_back(nums2[j]); ++j;}
        }

        if (i!=m) while(i<m) {c.push_back(nums1[i]); ++i;}
        if (j!=n) while(j<n) {c.push_back(nums2[j]); ++j;}

        nums1 = c;
    }
};