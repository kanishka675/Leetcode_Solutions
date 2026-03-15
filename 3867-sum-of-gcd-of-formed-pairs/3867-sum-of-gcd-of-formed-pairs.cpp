class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector <int> prefixGcd(n);
        int mxi = nums[0];
        for(int i=0; i<n; i++){
            mxi = max(mxi, nums[i]);
            prefixGcd[i] = gcd(nums[i], mxi);
        }
        sort(prefixGcd.begin(), prefixGcd.end());

        int i = 0;
        int j=n-1;
        long long ans = 0;

        while(i<j){
            ans += gcd(prefixGcd[i], prefixGcd[j]);
            i++;
            j--;
        }

        return ans;
    }
};