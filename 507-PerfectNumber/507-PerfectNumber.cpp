// Last updated: 4/15/2026, 10:48:51 AM
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for(int i = 1 ; i < num ; i++){
            if(num % i == 0){
                sum += i;
            }
        }
        cout << sum;
        return (num == sum);
    }
};