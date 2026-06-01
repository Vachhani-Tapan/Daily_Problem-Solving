// Last updated: 6/1/2026, 5:59:06 PM
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        unordered_map<int,int> m1;
5        while(n){
6            int dig = n % 10;
7            m1[dig]++;
8            n /= 10;
9        }
10        int ans = 0;
11        for(auto k : m1){
12            ans += k.first * k.second;
13        }
14        return ans;
15    }
16};