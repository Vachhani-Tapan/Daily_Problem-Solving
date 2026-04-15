// Last updated: 4/15/2026, 10:45:57 AM
class Solution {
public:
    int countDigits(int num) {
        if(num <= 9) return 1;
        int count = 0;
        int temp = num;
        while(temp){
            if(num % (temp % 10) == 0){
                count++;
            }
            temp = temp / 10;
        }
        return count;
    }
};