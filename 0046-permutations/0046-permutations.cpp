class Solution {
public:
    bool isPresent(int k, vector<int> arr){
        for(int i=0;i<arr.size();i++){
            if(arr[i] == k){
                return true;
            }
        }
        return false;
    }
    void helperFunc(vector<int> &nums,vector<int> &used, vector<vector<int>> &res){
        // base case
        if(nums.size() == used.size()){
            vector<int> temp(used.begin(),used.end());
            res.push_back(temp);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(!(isPresent(nums[i],used))){
                used.push_back(nums[i]);
                helperFunc(nums,used,res);
                used.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> used;
        helperFunc(nums,used,res);
        return res;
    }
};