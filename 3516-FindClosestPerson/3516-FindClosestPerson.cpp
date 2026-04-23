// Last updated: 4/23/2026, 6:21:06 PM
1class Solution {
2public:
3    int findClosest(int x, int y, int z) {
4        int d1 = abs(z - x);
5        int d2 = abs(z - y);
6        if(d1 < d2) return 1;
7        else if(d1 == d2) return 0;
8        return 2;
9    }
10};