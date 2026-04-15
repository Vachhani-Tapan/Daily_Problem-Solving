// Last updated: 4/15/2026, 10:43:46 AM
class Solution {
public:
    int countCommas(int n) {
        if(n < 1000) return 0;
        return n - 1000 + 1;
    }
};