// Last updated: 4/15/2026, 10:46:40 AM
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res = start ^ goal;
        return __builtin_popcount(res);
    }
};