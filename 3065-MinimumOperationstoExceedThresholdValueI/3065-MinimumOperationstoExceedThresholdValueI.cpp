// Last updated: 6/1/2026, 9:46:12 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        int count = 0;
5        for(auto i: nums){
6            if(i < k){
7                count++;
8            }
9        }
10        return count;
11    }
12};