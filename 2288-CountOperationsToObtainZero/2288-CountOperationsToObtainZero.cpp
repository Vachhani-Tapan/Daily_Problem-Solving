// Last updated: 4/15/2026, 10:46:45 AM
class Solution {
public:
    int countOperations(int num1, int num2) {
        long long count = 0;
        while(num1 && num2){
            if(num1 >= num2) {
                num1 = num1 - num2;
                (long long)count++;
            }
            else{
                num2 = num2 - num1;
                (long long)count++;
            } 
        }
        return count;
    }
};