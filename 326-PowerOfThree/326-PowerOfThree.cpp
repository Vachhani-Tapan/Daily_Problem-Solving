// Last updated: 4/15/2026, 10:49:13 AM
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        while(n > 1){
            if(n % 3 != 0){
                return false;
            }
            n = n / 3;
        }
        return true;
    }
};