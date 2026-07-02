class Solution {
public:
    int passwordStrength(string password) {
        int strength = 0;
        set <int> s;
        for(char ch : password){ //if char is not in set (distinct elements)
            if(s.find(ch) != s.end()){
                continue;
            }
            s.insert(ch);
            if(ch >= 'a' && ch <= 'z'){
                strength += 1;
            }
            else if(ch >= 'A' && ch <= 'Z'){
                strength += 2;
            }
            else if(ch >= '0' && ch <= '9'){
                strength += 3;
            }
            else{
                strength += 5;
            }
        }
        return strength;
        
    }
};