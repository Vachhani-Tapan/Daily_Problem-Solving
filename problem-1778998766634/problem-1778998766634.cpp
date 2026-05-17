// Last updated: 5/17/2026, 11:49:26 AM
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        vector<int> res;
5        unordered_set<int> s1(nums.begin() , nums.end());
6        for(int i = 1 ; i <= nums.size() ; i++){
7            if(s1.find(i) == s1.end()){
8                res.push_back(i);
9            }
10        }
11        return res;
12    }
13};