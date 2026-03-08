class Solution {
public:
    set<vector<int>> s; // set for unique combinations only
    void helper(vector<int>& candidates, int i, vector<int> &combin, vector<vector<int>> &ans, int target){
        if(i == candidates.size() || target < 0){
            return;
        }
        if(target == 0){
            if(s.find(combin) == s.end()){
                ans.push_back(combin);
                s.insert(combin);
            }
            return;
        }

        // single inclusion
        combin.push_back(candidates[i]);
        helper(candidates, i+1, combin, ans, target-candidates[i]);
        // multiple inclusion
        helper(candidates, i, combin, ans, target-candidates[i]);
        // exclusion
        combin.pop_back();
        helper(candidates, i+1, combin, ans, target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> combin;
        vector<vector<int>> ans;
        helper(candidates, 0, combin, ans, target);
        return ans;
    }
};