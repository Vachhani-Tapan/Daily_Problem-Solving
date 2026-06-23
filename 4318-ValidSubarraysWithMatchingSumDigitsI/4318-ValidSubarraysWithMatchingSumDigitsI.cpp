// Last updated: 6/23/2026, 10:23:08 AM
class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            long long sum = 0;
            for(int j = i ; j < nums.size() ; j++){
                sum += nums[j];
                int lastDig = sum % 10;
                if(lastDig != x){
                    continue;
                }
                long long temp = sum;
                while(temp >= 10){
                    temp /= 10;
                }
                int firstDig = temp;
                if(firstDig == x){
                    count++;
                }
            }
        }
        return count;
    }
};