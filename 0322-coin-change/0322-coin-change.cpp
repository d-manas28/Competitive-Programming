class Solution {
public:
    int coinChangeHelper(vector<int>& coins, int amount, vector<int>& dp) {
        if (amount == 0)
            return 0;
        if (dp[amount] != -2)
            return dp[amount]; // use -2 as "not computed"

        int minCoins = INT_MAX;
        for (int coin : coins) {
            if (amount >= coin) { // Check BEFORE recursing
                int subproblem = coinChangeHelper(coins, amount - coin, dp);
                if (subproblem != -1) {
                    minCoins = min(minCoins, subproblem + 1);
                }
            }
        }

        dp[amount] = (minCoins == INT_MAX) ? -1 : minCoins;
        return dp[amount];
    }

    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, -2); // -2 = not computed, -1 = impossible
        return coinChangeHelper(coins, amount, dp);
    }
};