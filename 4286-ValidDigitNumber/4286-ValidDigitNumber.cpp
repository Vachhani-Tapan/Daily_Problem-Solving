// Last updated: 6/23/2026, 10:23:22 AM
class Solution {
public:
    bool validDigit(int n, int x) {
        bool isVal = false;
        while(n >= 10){
            int dig = n % 10;
            if(dig == x){
                isVal = true;
            }
            n /= 10;
        }
        if(n != x && isVal){
            return true;
        }
        return false;
    }
};