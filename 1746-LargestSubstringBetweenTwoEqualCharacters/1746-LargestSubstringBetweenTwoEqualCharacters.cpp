// Last updated: 6/23/2026, 10:27:19 AM
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans = -1;
        vector<int> freq(26 , -1);
        for(int i = 0 ; i < s.size() ; i++){
            if(freq[s[i] - 'a'] == -1){
                freq[s[i] - 'a'] = i;
            }
            else{
                ans = max(ans , i - freq[s[i] -'a'] - 1);
            }
        }
        return ans;
    }
};