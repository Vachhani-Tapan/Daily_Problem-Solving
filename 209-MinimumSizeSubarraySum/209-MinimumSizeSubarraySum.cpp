// Last updated: 6/17/2026, 9:28:20 PM
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int i = 0;
5        int j = 0;
6        int min_len = INT_MAX;
7        int sum = 0;
8        while(j < nums.size()){
9            sum += nums[j];
10            while(sum >= target){
11                int len = j - i + 1;
12                min_len = min(min_len , len);
13                sum -= nums[i];
14                i++;
15            }
16            j++;
17        }
18        if(min_len == INT_MAX){
19            return 0;
20        }
21        return min_len;
22    }
23};