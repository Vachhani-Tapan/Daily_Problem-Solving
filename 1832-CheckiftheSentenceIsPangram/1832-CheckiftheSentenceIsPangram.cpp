// Last updated: 4/23/2026, 5:56:53 PM
1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4        if(sentence.size() < 26) return false;
5        vector<bool> alpha(26,false);
6        for(auto k : sentence){
7            if(k >= 'a' && k <= 'z'){
8                alpha[k - 'a'] = true;
9            }
10        }
11        for(auto k : alpha){
12            if(!k){
13                return false;
14            }
15        }
16        return true;
17    }
18};