#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int dp[s.size() + 1][2], ans = 0;
    dp[0][0] = 0;
    dp[0][1] = -1;
    for(int i = 0; i < s.size(); i++){
        dp[i + 1][0] = 0;
        dp[i + 1][1] = -1;
        if(s[i] == '2' || s[i] == '?'){
            dp[i + 1][1] = dp[i][0] + 1;
        }
        if(s[i] == '5' || s[i] == '?'){
            if(dp[i][1] != -1) dp[i + 1][0] = dp[i][1] + 1;
        }
        ans = max(ans, dp[i + 1][0]);
    }
    cout << ans << endl;
}
