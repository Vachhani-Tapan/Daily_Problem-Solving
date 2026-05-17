// Last updated: 5/17/2026, 11:38:22 AM
1/** 
2 * Forward declaration of guess API.
3 * @param  num   your guess
4 * @return 	     -1 if num is higher than the picked number
5 *			      1 if num is lower than the picked number
6 *               otherwise return 0
7 * int guess(int num);
8 */
9
10class Solution {
11public:
12    int guessNumber(int n) {
13        int start = 1;
14        int end = n;
15        while(start <= end){
16            int mid = start + (end - start) / 2;
17            if(guess(mid) == 0){
18                return mid;
19            }
20            else if(guess(mid) == 1){
21                start = mid + 1;
22            }
23            else{
24                end = mid - 1;
25            }
26        }
27        return 0;
28    }
29};