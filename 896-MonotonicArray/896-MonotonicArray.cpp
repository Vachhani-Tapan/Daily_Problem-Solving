// Last updated: 5/5/2026, 12:03:43 PM
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        bool monoincre = true;
5        bool monodecre = true;
6        for(int i = 1 ; i < nums.size() - 1 ; i++){
7            if(nums[i] < nums[i-1] || nums[i] > nums[i+1]){
8                monoincre = false;
9                break;
10            }
11        }
12        for(int i = 1 ; i < nums.size() - 1 ; i++){
13            if(nums[i] > nums[i-1] || nums[i] < nums[i+1]){
14                monodecre = false;
15                break;
16            }
17        }
18        if(monoincre) return true;
19        if(monodecre) return true;
20        return false;
21    }
22};