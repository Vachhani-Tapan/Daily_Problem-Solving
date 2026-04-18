// Last updated: 4/18/2026, 10:04:15 AM
1class Solution {
2public:
3    int mirrorDistance(int n) {
4        int temp = n;
5        int rev = 0;
6        while(temp){
7            rev = (rev * 10) + temp % 10;
8            temp = temp / 10;
9        }
10        return abs(n - rev);
11    }
12};