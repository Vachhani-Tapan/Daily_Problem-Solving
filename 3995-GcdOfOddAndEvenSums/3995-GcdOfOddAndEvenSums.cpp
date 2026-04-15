// Last updated: 4/15/2026, 10:44:23 AM
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddSum = n * n;
        int evenSum = n * (n + 1);
        return gcd(oddSum , evenSum);
    }
};