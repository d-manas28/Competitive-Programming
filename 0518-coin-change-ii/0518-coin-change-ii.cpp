class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<int> dp(amount+1,0);
        dp[0] = 1;
        for(int i=0;i<n;i++){
            int coin = coins[i];
            for(int j=coin;j<=amount;j++){
                dp[j] = long(dp[j]) + long(dp[j-coin]);
            }
        }
        return dp[amount];
    }
};