// Last updated: 4/15/2026, 10:44:57 AM
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int temp = x;
        while(temp){
            sum += temp % 10;
            temp = temp / 10;
        }
        return (x % sum == 0 ? sum : -1);
    }
};