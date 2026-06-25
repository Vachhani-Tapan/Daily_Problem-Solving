// Last updated: 6/25/2026, 6:43:09 PM
1class Solution {
2public:
3    int countMajoritySubarrays(vector<int>& nums, int target) {
4        int ans = 0;
5        for(int i = 0 ; i < nums.size() ; i++){
6            int tarCnt = 0;
7            for(int j = i ; j < nums.size() ; j++){
8                if(nums[j] == target){
9                    tarCnt++;
10                }
11
12                int len = j - i + 1;
13                if(tarCnt > len / 2){
14                    ans++;
15                }
16            }
17        }
18        return ans;
19    }
20};