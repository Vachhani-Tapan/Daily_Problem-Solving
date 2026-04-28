// Last updated: 4/28/2026, 6:22:02 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int max1 = 0;
5        int max2 = 0;
6        for(int i = 0 ; i < nums.size() ; i++){
7            if(nums[i] > max1){
8                max2 = max1;
9                max1 = nums[i];
10            }
11            else if(nums[i] > max2){
12                max2 = nums[i];
13            }
14        }
15        return (max1 - 1) * (max2 - 1);
16    }
17};