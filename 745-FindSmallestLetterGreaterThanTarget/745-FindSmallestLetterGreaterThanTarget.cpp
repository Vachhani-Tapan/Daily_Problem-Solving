// Last updated: 4/15/2026, 10:48:45 AM
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(auto k : letters){
            if(k > target){
                return k;
            }
        }
        return letters[0];
    }
};