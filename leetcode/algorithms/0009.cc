class Solution {
    public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        return x == reverse(x);
    }

    long long reverse(int x) {
        long long ans = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            ans = ans * 10 + pop;
        }

        return ans;
    }
};