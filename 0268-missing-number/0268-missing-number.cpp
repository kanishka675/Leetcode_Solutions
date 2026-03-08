class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expSum = 0;
        int actualSum = 0;
        int ans;
        

        for(int i=0; i<n; i++){
            actualSum += nums[i];
        }

        expSum = n*(n+1)/2;
        ans = expSum - actualSum;
        return ans;

    }
};