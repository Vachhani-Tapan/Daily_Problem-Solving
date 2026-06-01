// Last updated: 6/1/2026, 6:01:39 PM
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        int ans = 0;
5        while(n){
6            ans += n % 10;
7            n /= 10;
8        }
9        return ans;
10    }
11};