class Solution {
public:
    int changeHelper(vector<vector<int>> &dp,int amount, vector<int> &coins, int index){
        if(amount==0){
            return 1;
        }
        
        if(amount<0 || index>=coins.size())return 0;
        if(dp[index][amount] != -1)return dp[index][amount];
        dp[index][amount] = changeHelper(dp,amount-coins[index],coins,index) + changeHelper(dp,amount,coins,index+1);

        return dp[index][amount];
    } 
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(),vector<int> (amount+1, -1));
        int res = changeHelper(dp,amount,coins,0);
        return res;
    }
};