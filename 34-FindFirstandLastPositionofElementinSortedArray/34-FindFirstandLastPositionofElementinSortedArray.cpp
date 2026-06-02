// Last updated: 6/2/2026, 3:29:20 PM
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        vector<int> res(2,-1);
5        int left = 0; 
6        int right = nums.size() - 1;
7        int idx = -1;
8                        // FIRST OCCURENCE
9        while(left <= right){
10            int mid = left + (right - left) / 2;
11            if(nums[mid] == target){
12                idx = mid;
13                // GO LEFT NOW
14                right = mid - 1;
15            }
16            else if(nums[mid] > target){
17                right = mid - 1;
18            }
19            else{
20                left = mid + 1;
21            }
22        }
23        res[0] = idx;
24
25
26                        // LAST OCCURENCE
27        left = 0; 
28        right = nums.size() - 1;
29        idx = -1;
30        while(left <= right){
31            int mid = left + (right - left) / 2;
32            if(nums[mid] == target){
33                idx = mid;
34                // GO RIGHT NOW
35                left = mid + 1;
36            }
37            else if(nums[mid] > target){
38                right = mid - 1;
39            }
40            else{
41                left = mid + 1;
42            }
43        }
44        res[1] = idx;
45        return res;
46    }
47};