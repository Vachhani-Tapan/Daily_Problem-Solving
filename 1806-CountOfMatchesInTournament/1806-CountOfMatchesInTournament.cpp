// Last updated: 4/15/2026, 10:47:44 AM
class Solution {
public:
    int numberOfMatches(int n) {
        // one line solution;
        return n - 1;

        // another proper
        // int sum = 0;
        // while (n > 1) {
        //     if (n % 2 == 0) {
        //         sum += n / 2;
        //         n = n / 2;
        //     } else {
        //         sum += (n - 1) / 2;
        //         n = (n - 1) / 2 + 1;
        //     }
        // }
        // return sum;
    }
};