// Last updated: 5/5/2026, 12:24:47 PM
1class Solution {
2public:
3    bool canAliceWin(vector<int>& nums) {
4        int singSum = 0;
5        int dubSum = 0;
6        for(auto k : nums){
7            if(k >= 0 && k <= 9) singSum += k;
8            else dubSum += k;
9        }
10        if(singSum > dubSum) return true;
11        if(singSum < dubSum) return true;
12        return false;
13    }
14};