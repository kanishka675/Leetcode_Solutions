class Solution {
public:
    bool isPrime(int num){
        if(num<2){return false;}
        for(int i=2; i*i<=num; i++){
            if(num % i == 0){
                return false;
            }
        }
        return true;
    }
    bool completePrime(int num) {
        string s = to_string(num);
        int n = s.size();

        for(int i = 0; i < n; i++) {
            int prefix = stoi(s.substr(0, i + 1));
            int suffix = stoi(s.substr(i));

            if(!isPrime(prefix) || !isPrime(suffix)) {
                return false;
            }
        }
        return true;
    }
};