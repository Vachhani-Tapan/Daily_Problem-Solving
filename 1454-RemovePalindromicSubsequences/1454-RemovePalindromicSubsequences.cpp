// Last updated: 4/15/2026, 10:48:15 AM
class Solution {
public:
    int removePalindromeSub(string s) {
        string rev = s;
        reverse(rev.begin() , rev.end());
        if(rev == s) return 1;  // already palindrome
        return 2;  // step-1 remove all 'a' step-2 remove all 'b'
    }
};