// Last updated: 4/15/2026, 10:43:37 AM
class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        char dig = digit + '0';
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            string s = to_string(nums[i]);
            for(int j = 0 ; j < s.size() ; j++){
                if(s[j] == dig){
                    count++;
                }
            }
        }
        return count;
    }
};