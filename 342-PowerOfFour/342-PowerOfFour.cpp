// Last updated: 4/15/2026, 10:49:12 AM
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        while(n % 4 == 0){
            n = n / 4;
        }
        return n == 1;
    }
};