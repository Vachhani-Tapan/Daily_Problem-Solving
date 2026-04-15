// Last updated: 4/15/2026, 10:46:02 AM
class Solution {
public:
    int numberOfCuts(int n) {
        if(n == 1) return 0;
        if(n % 2 == 0) return n / 2;
        return n;
    }
};