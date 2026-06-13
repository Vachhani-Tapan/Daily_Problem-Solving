// Last updated: 6/13/2026, 8:57:50 PM
1class Solution {
2public:
3    int maxLengthBetweenEqualCharacters(string s) {
4        int ans = -1;
5        vector<int> freq(26 , -1);
6        for(int i = 0 ; i < s.size() ; i++){
7            if(freq[s[i] - 'a'] == -1){
8                freq[s[i] - 'a'] = i;
9            }
10            else{
11                ans = max(ans , i - freq[s[i] -'a'] - 1);
12            }
13        }
14        return ans;
15    }
16};