// Last updated: 4/15/2026, 10:47:13 AM
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for(int i = 0 ; i < patterns.size() ; i++){
            if(word.find(patterns[i]) != string::npos){
                count++;
            }
        }
        return count;
    }
};