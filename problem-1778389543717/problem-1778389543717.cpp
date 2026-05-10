// Last updated: 5/10/2026, 10:35:43 AM
1class Solution {
2public:
3    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
4        int a = 0;
5        int b = 0;
6        vector<int> res;
7        while(a < A.size() && b < B.size()){
8            int count = 0;
9            for(int i = 0 ; i <= b ; i++){
10                for(int j = 0 ; j <= a ; j++){
11                    if(A[i] == B[j]){
12                        count++;
13                    }
14                }
15            }
16            res.push_back(count);
17            a++;
18            b++;
19        }
20        return res;
21    }
22};