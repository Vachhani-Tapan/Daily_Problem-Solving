// Last updated: 5/3/2026, 5:04:47 PM
1class Solution {
2public:
3    vector<int> countOppositeParity(vector<int>& nums) {
4        for (int i = 0; i < nums.size(); i++) {
5            int count = 0;
6            for (int j = i + 1; j < nums.size(); j++) {
7                if (nums[i] % 2 == 0) {
8                    if (nums[j] % 2 != 0)
9                        count++;
10                } else {
11                    if (nums[j] % 2 == 0)
12                        count++;
13                }
14            }
15            nums[i] = count;
16        }
17        return nums;
18    }
19};