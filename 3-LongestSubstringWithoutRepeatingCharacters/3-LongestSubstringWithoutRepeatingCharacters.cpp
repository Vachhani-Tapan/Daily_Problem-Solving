// Last updated: 6/3/2026, 7:44:30 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        vector<int> seen (256,-1);
5        int l = 0;
6        int r = 0;
7        int maxLen = 0;
8        while(r < s.size()){
9            if(seen[s[r]] != -1){
10                if(seen[s[r]] >= l){
11                    l = seen[s[r]] + 1;
12                }
13            }
14            int len = r - l + 1;
15            maxLen = max(maxLen , len);
16            seen[s[r]] = r;
17            r++;
18        }
19        return maxLen;
20    }
21};