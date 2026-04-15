// Last updated: 4/15/2026, 10:45:53 AM
class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        set<char> s1 = {'a' , 'e' , 'i' , 'o' , 'u'};
        int count = 0;
        for(int i = left ; i <= right ; i++){
            if(s1.count(words[i].front()) && s1.count(words[i].back())){
                count++;
            }
        } 
        return count;
    }
};