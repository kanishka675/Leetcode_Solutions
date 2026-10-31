class Solution {
public:
    string removeStars(string s) {
        string ans;
        stack<char> st;
        int count = 0;

        for(char x : s){
            st.push(x);
        }
        while(!st.empty()){
            while(st.top() == '*'){
                count++;
                st.pop();
            }
            if(count > 0){
                st.pop();
                count--;
            }
            else{
                ans += st.top();
                st.pop();
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;

    }
};