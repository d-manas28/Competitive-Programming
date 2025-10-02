class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int i=0,n=nums.size();
        if(k>=n){
            k=k%n;
        }
        for(;i<n-k;i++){
            temp.push_back(nums[i]);
        }
        int j=0;
        for(;i<n;i++){
            nums[j++] = nums[i];
        }cout<<endl;
        for(int l=0;l<temp.size();l++){
            nums[j++] = temp[l];
        }cout<<endl;
    }
};