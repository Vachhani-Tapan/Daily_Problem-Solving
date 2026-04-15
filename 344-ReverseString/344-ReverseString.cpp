// Last updated: 4/15/2026, 10:49:10 AM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j){
            swap(s[i++] , s[j--]);
        }
    }
};