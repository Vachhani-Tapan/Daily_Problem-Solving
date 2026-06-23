// Last updated: 6/23/2026, 10:28:54 AM
class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        for(int i = 0 ; i < s.size() ; i++){
            string str = "";
            while(i < s.size() && s[i] != ' ')
            {
                str += s[i];
                i++;
            }
            if(str.size() > 0) count++;
        }
        return count;
    }
};