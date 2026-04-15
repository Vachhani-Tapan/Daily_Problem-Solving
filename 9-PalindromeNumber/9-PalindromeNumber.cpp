// Last updated: 4/15/2026, 10:50:01 AM
class Solution {
public:
    bool isPalindrome(int x) {
        long long temp  = x;
        long long rev = 0;
        for(int i = temp ; i > 0 ; i = i / 10){
            rev = (rev * 10) + i % 10;
        }
        return rev == x;
    }
};