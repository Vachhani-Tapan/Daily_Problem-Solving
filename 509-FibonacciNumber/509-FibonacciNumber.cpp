// Last updated: 4/26/2026, 2:52:44 PM
1class Solution {
2public:
3    int fib(int n) {
4        if (n == 0 || n == 1) {
5            return n;
6        }
7        return fib(n - 1) + fib(n - 2);
8    }
9};