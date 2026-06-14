// Last updated: 6/14/2026, 11:48:50 AM
1class Solution {
2public:
3    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
4        int count = 0;
5        for(auto k : fruits){
6            bool isplaced = false;
7            for(int i = 0 ; i < baskets.size() ; i++){
8                if(baskets[i] >= k){
9                    isplaced = true;
10                    baskets.erase(baskets.begin() + i);
11                    break;
12                }
13            }
14            if(!isplaced) count++;
15        }
16        return count;
17    }
18};