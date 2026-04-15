// Last updated: 4/15/2026, 10:44:58 AM
class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] < 10) sum += nums[i];
            else{
                string s = to_string(nums[i]);
                string ans = "";
                char maxDig = '0';
                for(int i = 0 ; i < s.size() ; i++){
                    maxDig = max(maxDig , s[i]);
                }
                for(int i = 0 ; i < s.size() ; i++){
                    ans += maxDig;
                }
                sum += stoi(ans);
            }
        }
        return sum;
    }
};