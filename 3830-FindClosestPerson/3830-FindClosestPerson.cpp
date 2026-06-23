// Last updated: 6/23/2026, 10:24:04 AM
class Solution {
public:
    int findClosest(int x, int y, int z) {
        int d1 = abs(z - x);
        int d2 = abs(z - y);
        if(d1 < d2) return 1;
        else if(d1 == d2) return 0;
        return 2;
    }
};