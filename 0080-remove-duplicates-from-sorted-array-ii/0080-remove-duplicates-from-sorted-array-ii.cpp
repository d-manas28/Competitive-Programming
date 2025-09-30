class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(i<2 || nums[i]!=nums[j-2]){
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};