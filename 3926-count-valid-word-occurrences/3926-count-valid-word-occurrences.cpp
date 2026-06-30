class Solution {
public:
    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
        string s = "";
        for(string &part : chunks){
            s += part;
        }
        unordered_map<string,int> freq;
        string curr = "";
        int n = s.size();


        for(int i = 0; i<n; i++){
            char ch = s[i];
            if(ch>= 'a' && ch<='z'){
                curr += ch;
            }
            else if(ch=='-'){
                if(i>0 && i<n-1 &&
                  islower(s[i+1]) && 
                  islower(s[i-1])){
                    curr += ch;
                  }
                else{
                    if(curr != ""){
                        freq[curr]++;
                        curr = "";
                            
                    }
                }
            }
            else{
                    if(curr != ""){
                        freq[curr]++;
                        curr = "";   
                    }
            }
        }
        if(curr != ""){
            freq[curr]++;
        }
        vector <int> ans;
        for(string &q : queries){
            ans.push_back(freq[q]);
        }

        return ans;
        
    }
};