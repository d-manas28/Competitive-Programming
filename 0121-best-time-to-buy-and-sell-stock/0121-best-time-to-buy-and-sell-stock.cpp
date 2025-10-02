class Solution {
public:
    int maxProfit(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> suffixMax(nums.size(),-1);
        int maxVal = INT_MIN;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>maxVal){
                maxVal = nums[i];
            }
            suffixMax[i] = maxVal;
        }
        int res = INT_MIN;
        for(int i=0;i<nums.size();i++){
            res = max(res,suffixMax[i] - nums[i]);
        }
        return res;
    }
};