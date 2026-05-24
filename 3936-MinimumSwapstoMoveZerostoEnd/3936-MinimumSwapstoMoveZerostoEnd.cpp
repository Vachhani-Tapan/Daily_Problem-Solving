// Last updated: 5/24/2026, 9:25:36 PM
1class Solution {
2public:
3    int minimumSwaps(vector<int>& nums) {
4        int zerocnt = 0;
5        int size = 0;
6        for(auto k : nums){
7            if(k == 0){
8                zerocnt++;
9            }
10        }
11        int n = nums.size() - 1;
12        for(int i = n ; i > n - zerocnt ; i--){
13            if(nums[i] == 0){
14                size++;
15            }
16        }
17        return zerocnt - size;
18    }
19};