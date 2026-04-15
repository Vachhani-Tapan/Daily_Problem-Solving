// Last updated: 4/15/2026, 10:48:17 AM
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while(num){
            if(num % 2 == 0){
                num = num / 2;
                count++;
            }
            else{
                num = num - 1;
                count++;
            } 
        }
        return count;

    }
};