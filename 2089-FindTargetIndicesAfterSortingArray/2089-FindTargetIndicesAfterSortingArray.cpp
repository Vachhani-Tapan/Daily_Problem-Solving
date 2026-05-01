// Last updated: 5/1/2026, 10:30:34 AM
1class Solution {
2public:
3    vector<int> targetIndices(vector<int>& nums, int target) {
4        sort(nums.begin() , nums.end());
5        vector<int> res;
6        for(int i = 0 ; i < nums.size() ; i++){
7            if(nums[i] == target){
8                res.push_back(i);
9            }
10        }
11        return res;
12    }
13};