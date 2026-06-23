// Last updated: 6/23/2026, 10:25:33 AM
class Solution {
public:
    int reverseNum(int n){
        int rev = 0;
        while(n){
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        return rev;
    }

    bool sumOfNumberAndReverse(int num) {
        for(int i = num/2 ; i <= num ; i++){
            if(i + reverseNum(i) == num){
                return true;
            }
        }
        return false;
    }
};