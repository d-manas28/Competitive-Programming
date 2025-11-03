class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;
        temp.push_back(nums[0]);
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(temp.back() < nums[i]){
                temp.push_back(nums[i]);
            }else{
                auto itr = lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
                temp[itr] = nums[i];
            }
        }
        return temp.size();
    }
};