class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit = 0;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i] > nums[i-1]){
                profit += nums[i]-nums[i-1];
            }
        }
        return profit;
    }
};