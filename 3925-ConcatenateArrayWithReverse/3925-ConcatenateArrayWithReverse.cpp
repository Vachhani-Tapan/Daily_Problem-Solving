// Last updated: 5/10/2026, 8:50:29 PM
1class Solution {
2public:
3    vector<int> concatWithReverse(vector<int>& nums) {
4        vector<int> ans;
5        for(auto k : nums){
6            ans.push_back(k);
7        }
8        for(int i = nums.size() - 1 ; i >=0 ; i--){
9            ans.push_back(nums[i]);
10        }
11        return ans;
12    }
13};