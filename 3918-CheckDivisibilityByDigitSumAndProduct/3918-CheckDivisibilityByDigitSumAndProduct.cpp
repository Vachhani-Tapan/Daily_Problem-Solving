// Last updated: 4/15/2026, 10:44:24 AM
class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int temp = n;
        while(temp){
            sum += temp % 10;
            prod *= temp % 10;
            temp = temp / 10;
        }
        int totalSum = sum + prod;
        return (n % totalSum == 0);
    }
};