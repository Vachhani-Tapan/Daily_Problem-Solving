// Last updated: 5/10/2026, 9:23:38 PM
1class Solution {
2public:
3    bool checkPowersOfThree(int n) {
4        // here we can also take 3^0 == 1 for the calculation
5        while(n > 0){
6            if(n % 3 == 2){
7                return false;
8            }
9            n /= 3;
10        }
11        return true;
12    }
13};