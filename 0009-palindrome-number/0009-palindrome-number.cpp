class Solution {
public:
    bool isPalindrome(int x) {
       int original = x;
       int revNum = 0;
       if(x < 0){
        return false;
       }

       while(x != 0){
        int dig = x % 10;
        if(revNum < INT_MIN/10 || revNum > INT_MAX/10){
            return false;
        }

        revNum = revNum * 10 + dig;
        x = x/10;
       }
       
      return revNum == original;
       
    }
};