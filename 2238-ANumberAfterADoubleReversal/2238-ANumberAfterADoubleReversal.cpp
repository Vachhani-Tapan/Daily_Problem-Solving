// Last updated: 4/15/2026, 10:46:56 AM
class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev1 = 0;
        int rev2 = 0;
        int temp = num;
        while(temp){
            rev1 = (rev1 * 10) + (temp % 10);
            temp = temp / 10;
        }
        int temp1 = rev1;
        while(temp1){
            rev2 = (rev2 * 10) + (temp1 % 10);
            temp1 = temp1 / 10;
        }
        return (num == rev2);
    }
};