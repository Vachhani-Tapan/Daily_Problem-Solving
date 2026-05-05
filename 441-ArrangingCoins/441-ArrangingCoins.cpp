// Last updated: 5/5/2026, 7:54:10 PM
1class Solution {
2public:
3    int arrangeCoins(int n) {
4        int i = 1;
5        int count = 0;
6        while(n > 0){
7            n -= i++;
8            count++;
9        }
10        if(n == 0) return count;
11        return count - 1;
12    }
13};