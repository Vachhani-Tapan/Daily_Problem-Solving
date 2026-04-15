// Last updated: 4/15/2026, 10:43:56 AM
class Solution {
public:
    string reverseByType(string s) {
        int i = 0; 
        int j = s.size() - 1;
        while(i <= j){
            if((isalpha(s[i])) && (isalpha(s[j]))){
                swap(s[i] , s[j]);
                i++;
                j--;
            }
            else if(!isalpha(s[i])){
                i++;
            }
            else{
                j--;
            }
        }
        i = 0;
        j = s.size() - 1;
        while(i <= j){
            if((!isalpha(s[i])) && (!isalpha(s[j]))){
                swap(s[i] , s[j]);
                i++;
                j--;
            }
            else if(isalpha(s[i])){
                i++;
            }
            else{
                j--;
            }
        }
        return s;
    }
};