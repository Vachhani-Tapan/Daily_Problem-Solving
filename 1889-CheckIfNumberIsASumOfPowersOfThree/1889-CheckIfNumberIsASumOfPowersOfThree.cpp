// Last updated: 6/23/2026, 10:27:08 AM
class Solution {
public:
    bool checkPowersOfThree(int n) {
        // here we can also take 3^0 == 1 for the calculation
        while(n > 0){
            if(n % 3 == 2){
                return false;
            }
            n /= 3;
        }
        return true;
    }
};