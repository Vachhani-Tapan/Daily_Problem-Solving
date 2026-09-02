class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int minElement = *min_element(nums.begin() , nums.end());

        // if the minElement in the nums is odd then we can make whole array to the odd
        if(minElement % 2 == 1){
            return true;
        }

        // check if we can make all element even
        for(auto k : nums){
            if(k % 2 == 1){
                return false;
            }
        }
        return true;
    }
};