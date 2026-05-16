class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> st;
        int left = 0;
        int maxLen = 0;
        for(int right = 0; right < s.size(); right++){
            while(st.count(s[right])){ // duplicate exists
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);

            //window length
        int length = right - left + 1;
        maxLen = max(maxLen, length);
        
        }
        
        return maxLen;
    }
};