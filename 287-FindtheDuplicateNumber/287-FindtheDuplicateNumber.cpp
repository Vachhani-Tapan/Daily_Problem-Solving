// Last updated: 6/5/2026, 5:57:11 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> v1(n + 1 , 0);
6        for(int i = 0 ; i < nums.size() ; i++){
7            if(v1[nums[i]] == 0){
8                v1[nums[i]] = 1;
9            }
10            else{
11                return nums[i];
12            }
13        }
14        return 0;
15    }
16};