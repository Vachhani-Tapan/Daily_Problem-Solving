class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {

        if(s.size() < 10) return {};
        
        unordered_set<string> seenOnce;
        unordered_set<string> result;

        for(int i = 0 ; i < s.size() - 9 ; i++){
            string s1 = s.substr(i , 10);
            if(seenOnce.count(s1)){
                result.insert(s1);
            }
            else{
                seenOnce.insert(s1);
            }
        }
        vector<string> ans(result.begin() , result.end());
        return ans;
    }
};