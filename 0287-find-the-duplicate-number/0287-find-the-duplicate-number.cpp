class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int st = 1;
        int n = nums.size();
        while(st<=n){
            if(nums[st] == nums[st-1]){
                return nums[st];
            }
            st++;
        }
        return -1;


    }
};