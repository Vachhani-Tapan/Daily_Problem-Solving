// Last updated: 5/29/2026, 8:05:19 AM
1class Solution {
2public:
3    int minElement(vector<int>& nums) {
4        int res = INT_MAX;
5        for(int i = 0 ; i < nums.size() ; i++){
6            int sum = 0;
7            while(nums[i]){
8                sum += nums[i] % 10;
9                nums[i] = nums[i] / 10;
10            }
11            res = min(res , sum);
12        }
13        return res;
14    }
15};