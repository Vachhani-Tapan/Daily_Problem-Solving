// Last updated: 4/15/2026, 10:47:22 AM
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.size() > 0 && s.find(part) < s.size()){
            s.erase(s.find(part) , part.size());
        }
        return s;
    }
};