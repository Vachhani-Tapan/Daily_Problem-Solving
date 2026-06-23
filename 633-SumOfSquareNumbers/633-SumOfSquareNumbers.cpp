// Last updated: 6/23/2026, 10:28:40 AM
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left = 0;
        long long right = sqrt(c);
        while(left <= right){
            long long sum = (left * left) + (right * right);
            if(sum == c){
                return true;
            }
            else if(sum < c){
                left++;
            }
            else{
                right--;
            }
        }
        return false;
    }
};