class Solution {
public:
    // Modified helper: now takes lastIndex to track what was last included
    // dp[i][lastIndex+1] = max LIS from index i, when lastIndex was last picked
    // We use lastIndex+1 because -1 means nothing picked yet
    int helper(vector<int>& nums, int curr, int lastIndex, int n, 
               vector<vector<int>>& dp){
        // base case
        if(curr == n){
           return 0;  // No more elements to consider
        }
        
        // Check memoization (lastIndex+1 because lastIndex can be -1)
        if(dp[curr][lastIndex + 1] != -1) {
            return dp[curr][lastIndex + 1];
        }
        
        // Option 1: Don't take current element
        int notTake = helper(nums, curr + 1, lastIndex, n, dp);
        
        // Option 2: Take current element (only if valid)
        int take = 0;
        if(lastIndex == -1 || nums[curr] > nums[lastIndex]) {
            take = 1 + helper(nums, curr + 1, curr, n, dp);
        }
        
        // Store and return the maximum
        dp[curr][lastIndex + 1] = max(take, notTake);
        return dp[curr][lastIndex + 1];
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        // dp[i][j] where i=current index, j=last picked index+1
        // Size is n x (n+1) because lastIndex ranges from -1 to n-1
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return helper(nums, 0, -1, n, dp);
    }
};