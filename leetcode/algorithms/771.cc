#include <iostream>
#include <string>
using namespace std;


class Solution {
    public:

    int numJewelsInStones(string J, string S) {
        int ans = 0;
        int n = S.size();

        for (int i=0; i<n; ++i) {
            char c = S[i];
            for (int j=0; j<J.size(); ++j) {
                if(J[j] == c) {
                    ++ans;
                    break;
                }
            }
        }

        return ans;
    }
};


int main() {
    Solution solution;

    string J, S;
    cin >> J >> S;
    cout << solution.numJewelsInStones(J, S) << endl;
}