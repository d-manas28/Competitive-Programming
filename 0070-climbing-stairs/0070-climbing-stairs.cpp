class Solution {
public:
    int climbStairsHelper(int start, int end, vector<int> &dp){
        if(start > end){
            return 0;
        }
        if(start == end){
            return 1;
        }
        if(dp[start] != -1){
            return dp[start];
        }
        return dp[start] = climbStairsHelper(start+1,end,dp) + climbStairsHelper(start+2,end,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return climbStairsHelper(0,n,dp);
    }
};