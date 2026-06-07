// Last updated: 6/7/2026, 9:55:20 AM
1class Solution {
2public:
3    int sumOfGoodIntegers(int n, int k) {
4        int ans = 0;
5        for(int i = max(n - k , 1) ; i <= n + k ; i++){
6            if(abs(n - i) <= k && (n & i) == 0){
7                ans += i;
8            }
9        }
10        return ans;
11    }
12};