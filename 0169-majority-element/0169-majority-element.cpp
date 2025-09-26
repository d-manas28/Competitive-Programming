class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // brute force
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second>(n/2))
                return it->first;
        }
        return 0;
    }
};