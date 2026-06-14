// Last updated: 6/14/2026, 11:24:56 AM
1class Solution {
2public:
3    bool checkGoodInteger(int n) {
4        int digSum = 0;
5        int sqSum = 0;
6        while(n){
7            digSum += n % 10;
8            sqSum += (n % 10) * (n % 10);
9            n /= 10;
10        }
11        return (sqSum - digSum >= 50);
12    }
13};