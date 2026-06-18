// Last updated: 6/18/2026, 5:01:45 PM
1class Solution {
2public:
3    int minimumDifference(vector<int>& nums, int k) {
4        sort(nums.begin() , nums.end());
5        int i = 0;
6        int j = i + k - 1;
7        int ans = INT_MAX;
8        while(j < nums.size()){
9            ans = min(ans , nums[j] - nums[i]);
10            i++;
11            j++;
12        }
13        return ans;
14    }
15};