// Last updated: 6/8/2026, 1:18:16 PM
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        unordered_map<int,int> m1;
5        for(int i = 0 ; i < nums.size() ; i++){
6            if(m1.find(nums[i]) != m1.end()){
7                if(i - m1[nums[i]] <= k){
8                    return true;
9                }
10            }
11            m1[nums[i]] = i;
12        }
13        return false;
14    }
15};