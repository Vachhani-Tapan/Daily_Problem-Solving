// Last updated: 6/16/2026, 3:21:46 PM
1class Solution {
2public:
3    vector<string> findRelativeRanks(vector<int>& score) {
4        vector<int> clone(score.begin() , score.end());
5        unordered_map<int,int> m1;
6        vector<string> res;
7        sort(clone.begin() , clone.end());
8        reverse(clone.begin() , clone.end());
9        for(int i = 0 ; i < clone.size() ; i++){
10            m1[clone[i]] = i + 1;
11        }
12        for(auto k : score){
13            if(m1[k] == 1){
14                res.push_back("Gold Medal");
15            }
16            else if(m1[k] == 2){
17                res.push_back("Silver Medal");
18            }
19            else if(m1[k] == 3){
20                res.push_back("Bronze Medal");
21            }
22            else{
23                res.push_back(to_string(m1[k]));
24            }
25        }
26        return res;
27    }
28};