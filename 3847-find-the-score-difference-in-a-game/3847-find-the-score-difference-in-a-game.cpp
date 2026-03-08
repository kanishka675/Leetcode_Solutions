class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int P1 = 0;
        int P2 = 0;
        int ans = 0;
        bool isP1Active = true;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] % 2 != 0){
                isP1Active = !isP1Active;
            }
            if((i+1) % 6 == 0){
                 isP1Active = !isP1Active;
            }

            if(isP1Active){
                P1 += nums[i];
            }
            else{
               P2 += nums[i];
            }
            ans = P1 -P2;
        }
        return ans;
    }
};