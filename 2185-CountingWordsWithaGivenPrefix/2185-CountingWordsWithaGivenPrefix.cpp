// Last updated: 5/7/2026, 3:47:37 PM
1class Solution {
2public:
3    int prefixCount(vector<string>& words, string pref) {
4        int count = 0;
5        for(int i = 0 ; i < words.size() ; i++){
6            if(words[i].substr(0,pref.size()) == pref){
7                count++;
8            }
9        }
10        return count;
11    }
12};