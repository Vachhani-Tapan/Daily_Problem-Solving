class Solution {
public:
    int alternateDigitSum(int n) {

        // method 1 without string conversion
        
        int count = 0;
        int sum = 0;
        while(n){
            count++;
            int digit = n % 10;
            if(count % 2 != 0){
                sum -= digit;
            }
            else{
                sum += digit;
            }
            n /= 10;
        }
        if(count % 2 != 0){
            return (-1) * sum;
        }
        return sum;


        // method 2 using the string conversion

        // string s = to_string(n);
        // long long res = 0;
        // for(int i = 0 ; i < s.size() ; i++){
        //     if(i % 2 == 0){
        //         res += s[i] - '0';
        //     }
        //     else{
        //         res -= s[i] - '0';
        //     }
        // }
        // return res;
    }
};