class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        queue<int> Q;

        for(int i=0; i<s.size(); i++){
            if(m.find(s[i]) == m.end()){ //Character does not exist in map means it is unique 
            Q.push(i);
            }
            m[s[i]]++;
        }

        while(!Q.empty() && m[s[Q.front()]] > 1){ // removing el greater than 1 freq
            Q.pop();
        }

        return Q.empty() ? -1 : Q.front();

    }
};