class Solution {
public:
    int helper(int num){
        int sum = 0;
        while(num>0){
            int digit = num % 10;
            sum += digit;
            num/= 10;
        }
        return sum;
    }
    int addDigits(int num) { 
        while(num >= 10){
            num = helper(num);  
        }
        return num;
    }
};