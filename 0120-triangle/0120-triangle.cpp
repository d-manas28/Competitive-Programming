class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle.size(),vector<int>(triangle.size(),0));
        int n = triangle.size();
        dp[0][0] = triangle[0][0];
        int res = INT_MAX;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i+1; j++) {
                if (j == 0) {
                    dp[i][j] = dp[i - 1][j] + triangle[i][j];
                } else if (i == j) {
                    dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
                } else {
                    dp[i][j] = min((triangle[i][j] + dp[i - 1][j - 1]),
                                   (triangle[i][j] + dp[i - 1][j]));
                }
                if (i == n - 1) {
                    res = min(res, dp[i][j]);
                }
            }
        }
        return res==INT_MAX?dp[0][0]:res;
    }
};