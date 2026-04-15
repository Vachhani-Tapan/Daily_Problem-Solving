// Last updated: 4/15/2026, 10:45:49 AM
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        for(int i = 0 ; i < nums.size() ; i++){
            int suml = 0;
            int sumr = 0;
            for(int j = 0 ; j < i ; j++){
                suml += nums[j];  
            }
            for(int k = i + 1; k < nums.size() ; k++){
                sumr += nums[k];
            }
            left[i] = suml;
            right[i] = sumr;
        }
        vector<int>res (nums.size());
        for(int i = 0 ; i < nums.size() ; i++){
            res[i] = abs(left[i] - right[i]);
        }
        return res;
    }
};