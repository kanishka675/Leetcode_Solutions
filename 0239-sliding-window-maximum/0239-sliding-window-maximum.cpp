class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque <int> dq;
        vector <int> ans;
        for(int i=0; i<k; i++){ //removing el which are less than curr val from deque
            while(dq.size()>0 && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        for(int i=k; i<nums.size(); i++){
            ans.push_back(nums[dq.front()]); //this is cuz dq contains indexes not actual vals
            //remove vals that are not part of curr window
            while(dq.size()>0 && dq.front() <= i-k){
                dq.pop_front();
            }
            while(dq.size()>0 && nums[dq.back()] <= nums[i]){ //removing smaller vals
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        return ans;
    }
};