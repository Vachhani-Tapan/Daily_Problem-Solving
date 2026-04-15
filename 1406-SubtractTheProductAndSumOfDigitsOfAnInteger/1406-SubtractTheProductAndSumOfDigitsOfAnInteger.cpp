// Last updated: 4/15/2026, 10:48:20 AM
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        while(n){
            prod *= n % 10;
            sum += n % 10;
            n = n / 10;
        }
        return prod-sum;
    }
};