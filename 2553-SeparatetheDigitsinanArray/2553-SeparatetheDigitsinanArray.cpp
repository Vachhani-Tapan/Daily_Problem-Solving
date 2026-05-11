// Last updated: 5/11/2026, 9:54:05 AM
1class Solution {
2public:
3    vector<int> separateDigits(vector<int>& nums) {
4        vector<int> res;
5        for(auto k : nums){
6            string s  = to_string(k);
7            for(auto c : s){
8                res.push_back(c - '0');
9            }
10        }
11        return res;
12    }
13};