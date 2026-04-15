// Last updated: 4/15/2026, 10:46:14 AM
class Solution {
public:
    int commonFactors(int a, int b) {
        int min1 = min(a,b);
        int count = 0;
        for(int i = 1 ; i <= min1 ; i++){
            if((a % i == 0) && (b % i == 0)){
                count++;
            }
        }
        return count;
    }
};