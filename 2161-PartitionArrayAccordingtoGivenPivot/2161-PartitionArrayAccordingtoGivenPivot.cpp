// Last updated: 6/8/2026, 8:12:22 AM
1class Solution {
2public:
3    vector<int> pivotArray(vector<int>& nums, int pivot) {
4        vector<int> v1;
5        for(int i = 0 ; i < nums.size() ; i++){
6            if(nums[i] < pivot){
7                v1.push_back(nums[i]);
8            }
9        }
10        for(int i = 0 ; i < nums.size() ; i++){
11            if(nums[i] == pivot){
12                v1.push_back(nums[i]);
13            }
14        }
15        for(int i = 0 ; i < nums.size() ; i++){
16            if(nums[i] > pivot){
17                v1.push_back(nums[i]);
18            }
19        }
20        return v1;
21    }
22};