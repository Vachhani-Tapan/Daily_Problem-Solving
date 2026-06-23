// Last updated: 6/23/2026, 10:27:11 AM
class Solution {
public:
    bool halvesAreAlike(string s) {
        int half = s.size() / 2;
        string a = s.substr(0 , half);
        string b = s.substr(half,s.size());
        int vowela = 0;
        int vowelb = 0;
        for(auto k : a){
            k = tolower(k);
            if(k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u'){
                vowela++;
            }
        }
        for(auto k : b){
            k = tolower(k);
            if(k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u'){
                vowelb++;
            }
        }
        return vowela == vowelb;
    }
};