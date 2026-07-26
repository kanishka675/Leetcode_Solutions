class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> m;
        vector<int> ans;
        int n = arr.size();

        for(int i=0; i<n; i++){
            int first = arr[i];
            int second = target - first;

            if(m.find(second) != m.end()){
                ans.push_back(m[second]+1);
                ans.push_back(i+1);
                break;
            }
            m[first] = i;

        }
        return ans;
    }
};