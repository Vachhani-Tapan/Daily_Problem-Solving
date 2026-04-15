// Last updated: 4/15/2026, 10:48:30 AM
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> words;
        string temp = "";
        for(auto k : text){
            if(k == ' '){
                words.push_back(temp);
                temp = "";
            }
            else{
                temp += k;
            }
        }
        words.push_back(temp);
        vector<string> res;
        for(int i = 0 ; i < words.size() - 2 ; i++){
            if(words[i] == first && words[i+1] == second){
                res.push_back(words[i+2]);
            }
        }
        return res;
    }
};