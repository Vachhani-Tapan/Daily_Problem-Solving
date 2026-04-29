// Last updated: 4/29/2026, 9:33:37 AM
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        if(nums.size() == 1) return 0;
5        if(nums[0] > nums[1]) return 0;
6        if (nums[nums.size() - 1] > nums[nums.size() - 2])
7    return nums.size() - 1;
8        int l = 1;
9        int r = nums.size() - 2;
10        while(l <= r){
11            int mid = l + (r-l)/2;
12            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
13                return mid;
14            }
15            else if(nums[mid] > nums[mid-1]){
16                l = mid + 1;
17            }
18            else{
19                r = mid - 1;
20            }
21        }
22        return 0;
23    }
24};