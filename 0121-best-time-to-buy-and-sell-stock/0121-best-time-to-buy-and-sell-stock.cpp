class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int profit = INT_MIN;
        for(int i=0;i<prices.size();i++){
            min = prices[i]<min?prices[i]:min;
            profit = max(profit, prices[i]-min);
        }
        return profit;
    }
};