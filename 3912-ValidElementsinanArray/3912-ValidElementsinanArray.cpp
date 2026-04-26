// Last updated: 4/26/2026, 1:28:12 PM
1class Solution {
2public:
3    vector<int> findValidElements(vector<int>& nums) {
4        vector<int> res;
5        for (int i = 0; i < nums.size(); i++) {
6            bool greaterThanLeft = true;
7
8            // checking that nums[i] is strickly greater than left of element
9            for (int j = 0; j < i; j++) {
10                if (nums[i] <= nums[j]) {
11                    greaterThanLeft = false;
12                    break;
13                }
14            }
15
16            bool greaterThanRight = true;
17            // checking that nums[i] is strickly greater than right element
18            // only checking is the nums[i] is invalid in the left
19            if (!greaterThanLeft) {
20                for (int j = i + 1; j < nums.size(); j++) {
21                    if (nums[i] <= nums[j]) {
22                        greaterThanRight = false;
23                        break;
24                    }
25                }
26            }
27
28            // if nums[i] is valid for left or the right one then we are pushing it in the resulting array
29            if(greaterThanLeft || greaterThanRight){
30                res.push_back(nums[i]);
31            }
32        }
33        return res;
34    }
35};