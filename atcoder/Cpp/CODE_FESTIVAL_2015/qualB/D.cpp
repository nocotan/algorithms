#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int memo[100000];

int main() {
    int n;
    cin >> n;
    vector<int> ans;
    for(int i=0; i<n; ++i) {
        int s, c;
        cin >> s >> c;
        int j = 0;
        while(j<c) {
            if(memo[s]==0) {
                memo[s]++;
                j++;
            }
            else s++;
        }
        ans.push_back(s);
    }
    for(auto e : ans) cout << e << endl;
}
