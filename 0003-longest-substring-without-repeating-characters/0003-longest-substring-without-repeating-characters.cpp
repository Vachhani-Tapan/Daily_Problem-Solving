class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> seen (256,-1);
        int l = 0;
        int r = 0;
        int maxLen = 0;
        while(r < s.size()){
            if (seen[s[r]] != -1 && seen[s[r]] >= l) {
                l = seen[s[r]] + 1;
            }
            int len = r - l + 1;
            maxLen = max(maxLen , len);
            seen[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};