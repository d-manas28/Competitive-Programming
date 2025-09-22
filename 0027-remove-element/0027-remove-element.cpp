class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i=0;
        int j=n-1;
        if (n==0) return 0;
        while(j>=0 && nums[j]==val)j--;
        while(i<=j){
            if(nums[i]==val){
                if(nums[i] == nums[j]){
                    j--;
                }else{
                    swap(nums[i],nums[j]);
                    i++;
                    j--;    
                }
                
            }else{
                i++;
            }
        }
        int k=j+1;
        return k;
    }
};