// Last updated: 6/16/2026, 5:28:15 PM
1class Solution {
2public:
3    int minPairSum(vector<int>& nums) {
4        sort(nums.begin() , nums.end());
5        int maxi = 0;
6        int i = 0;
7        int j = nums.size() - 1;
8        while(i < j){
9            maxi = max(maxi , nums[i++] + nums[j--]);
10        }
11        return maxi;
12    }
13};