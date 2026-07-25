class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int, int> freq;
        int limit = n/3;
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
            if(freq[nums[i]] == limit+1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
        
    }
};