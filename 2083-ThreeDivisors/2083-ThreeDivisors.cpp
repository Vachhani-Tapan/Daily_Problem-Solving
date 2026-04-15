// Last updated: 4/15/2026, 10:47:14 AM
class Solution {
public:

    int divisors(int n){
        int count = 0;
        for(int i = 1 ; i <= n ; i++){
            if(n % i == 0){
                count++;
            }
        }
        return count;
    }

    bool isThree(int n) {
        return(divisors(n) == 3);
    }
};