class Solution {
public:
    bool isPalindrome(int x) {
        long long pal = 0;
        long long temp = x;

        while(temp > 0){
            pal = pal * 10 + temp % 10;
            temp /= 10;
        }

        return pal == x;

    }
};