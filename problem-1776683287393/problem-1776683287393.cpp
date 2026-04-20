// Last updated: 4/20/2026, 4:38:07 PM
1class Solution {
2public:
3    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
4        int count = 0;
5        for(int i = 0 ; i < items.size() ; i++){
6            if(ruleKey == "type" && items[i][0] == ruleValue){
7                count++;
8            }
9            if(ruleKey == "color" && items[i][1] == ruleValue){
10                count++;
11            }
12            if(ruleKey == "name" && items[i][2] == ruleValue){
13                count++;
14            }
15        }
16        return count;
17    }
18};