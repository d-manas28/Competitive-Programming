class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        int n=nums.size();
        if(n==1)return 1;
        int cnt = 1;
        while(j<n){
           if(nums[i]==nums[j]){
            j++;
           }else{
            nums[i+1] = nums[j];
            i++;
            cnt++;
           }
        }
       return cnt;
    }
};