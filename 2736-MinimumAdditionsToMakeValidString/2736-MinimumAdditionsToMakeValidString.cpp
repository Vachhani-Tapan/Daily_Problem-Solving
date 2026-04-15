// Last updated: 4/15/2026, 10:45:46 AM
class Solution {
public:
    int addMinimum(string word) {
        int count = 0;
        for(int i = 0 ; i < word.size() ; ){
            if((word[i] == 'a') && (word[i+1] == 'b') && (word[i+2] == 'c')){
                i += 3;
            }
            else if((word[i] == 'a' && word[i+1] == 'b') || (word[i] == 'a' && word[i+1] == 'c') || (word[i] == 'b' && word[i+1] == 'c')){
                count++;
                i += 2;
            }
            else if((word[i] == 'a') || (word[i] == 'b') || (word[i] == 'c')){
                count = count + 2;
                i++;
            }
        }
        return count;
    }
};