class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> anagram;
        unordered_map<string,vector<string>> m;
        for(int i=0; i<strs.size(); i++){
            string copy = strs[i];
            sort(copy.begin(), copy.end());

            m[copy].push_back(strs[i]);
            
        }

        for(auto it : m){
            ans.push_back(it.second);
        }
        return ans;
    }
};