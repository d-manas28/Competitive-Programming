class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return true;
        vector<int> isPossible(n,0);
        isPossible[n-1] = 1;
        int lastPosIndex = n-1;
        if(nums[n-2]>0){
            isPossible[n-2] = 1;
            lastPosIndex = n-2;
        }
        for(int i=n-3;i>=0;i--){
            if(isPossible[i+1]){
                if(nums[i]>=1){
                    isPossible[i]=1;
                    lastPosIndex = i;
                }
            }else{
                int diff = lastPosIndex-i;
                if(nums[i]>=diff){
                    isPossible[i]=1;
                    lastPosIndex = i;
                }
            }
        }
       if(isPossible[0])return true;
       return false;
    }
};