// Last updated: 6/23/2026, 10:29:30 AM
class Solution {
public:
    int findMin(vector<int>& nums) {
        // IMP TestCases : [10,1,10,10,10]  , [2,2,2,0,1,2]

        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {
            int mid = (right + left) / 2;
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } else if (nums[mid] < nums[right]) {
                right = mid;
            } else {
                right--;
            }
        }
        return nums[left];
    }
};