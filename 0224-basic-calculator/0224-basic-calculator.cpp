class Solution {
public:
    int calculate(string s) {
        long long number = 0;
        int sign = 1;
        int result = 0;

        stack<int> stk;

        for (auto k : s) {
            if (isdigit(k)) {
                number = (number * 10) + (k - '0');
            } else if (k == '+') {
                result += (number * sign);
                sign = 1;
                number = 0;
            } else if (k == '-') {
                result += (number * sign);
                sign = -1;
                number = 0;
            } else if (k == '(') {
                stk.push(result);
                stk.push(sign);
                result = 0;
                number = 0;
                sign = 1;
            } else if (k == ')') {
                result += (number * sign);
                number = 0;

                int stack_sign = stk.top();
                stk.pop();
                int last_result = stk.top();
                stk.pop();

                result *= stack_sign;
                result += last_result;
            }
        }
        result += (number * sign);
        return result;
    }
};