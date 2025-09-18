class Solution {
public:
    void sortColors(vector<int>& nums) {
        int P_0 = 0;
        int P_2 = nums.size()-1;
        int i=0;
        while(i<=P_2){
            if(nums[i]==0){
                swap(nums[i],nums[P_0]);
                P_0++;
                i++;
            }else if(nums[i]==2){
                swap(nums[i],nums[P_2]);
                P_2--;
            }else{
                i++;
            }
        }
    }
};