// Last updated: 6/23/2026, 10:22:59 AM
class Solution {
public:
    bool checkGoodInteger(int n) {
        int digSum = 0;
        int sqSum = 0;
        while(n){
            digSum += n % 10;
            sqSum += (n % 10) * (n % 10);
            n /= 10;
        }
        return (sqSum - digSum >= 50);
    }
};