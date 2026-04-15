// Last updated: 4/15/2026, 10:46:17 AM
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n % 2 != 0) return n * 2;
        return n;
    }
};