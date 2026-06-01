// Last updated: 6/1/2026, 5:40:39 PM
1class StockSpanner {
2    stack<pair<int, int>> s1;
3
4public:
5    StockSpanner() {}
6
7    int next(int price) {
8        int span = 1;
9        while (!s1.empty() && s1.top().first <= price) {
10            span += s1.top().second;
11            s1.pop();
12        }
13        s1.push({price, span});
14        return span;
15    }
16};
17
18/**
19 * Your StockSpanner object will be instantiated and called as such:
20 * StockSpanner* obj = new StockSpanner();
21 * int param_1 = obj->next(price);
22 */