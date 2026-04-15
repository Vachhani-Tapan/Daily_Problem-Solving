// Last updated: 4/15/2026, 10:49:21 AM
class Solution {
public:
    int addDigits(int n) {
        // while loop method
        // while(n >= 10){
        //     int sum = 0;
        //     while(n > 0){
        //         sum += n % 10;
        //         n /= 10;
        //     }
        //     n = sum;
        // }
        // return n;

        // mathematical approach
        if(n == 0) return 0;
        if(n % 9 == 0) return 9;
        return n % 9;
    }
};