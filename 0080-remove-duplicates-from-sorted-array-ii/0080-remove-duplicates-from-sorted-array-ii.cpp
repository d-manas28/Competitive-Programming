class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> freqCounter;
        int res = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            freqCounter[nums[i]]++;
        }
        int i=0;
        for(auto it = freqCounter.begin();it!=freqCounter.end();it++){
            int counter = it->second;
            counter = min(counter,2);
            for(int j=0;j<counter;j++){
                nums[i++] = it->first;
            }
        }
        sort(nums.begin(),nums.begin()+i);
        return i;
    }
};