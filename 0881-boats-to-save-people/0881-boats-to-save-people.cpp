class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin() , nums.end());
        int i = 0;
        int j = nums.size() - 1;
        int count = 0;

        while(i <= j){
            // check if sum of both the 1st and last element is greater then target then right max element require a single boat alone so j-- and count++
            if(nums[i] + nums[j] > limit){
                count++;
                j--;
            }
            else{
                count++;
                i++;
                j--;
            }
        }
        return count;
    }
};