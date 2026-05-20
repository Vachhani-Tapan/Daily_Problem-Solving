// Last updated: 5/20/2026, 9:32:44 AM
1class Solution {
2public:
3    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
4        int n = A.size();
5        vector<int> freq(n+1 , 0);
6        vector<int> res;
7        int count = 0;
8        for(int i = 0 ; i < A.size() ; i++){
9            freq[A[i]]++;
10            if(freq[A[i]] == 2){
11                count++;
12            }
13            freq[B[i]]++;
14            if(freq[B[i]] == 2){
15                count++;
16            }
17            res.push_back(count);
18        }
19        return res;
20    }
21};