class Solution {
public:
    int calculate(string s) {
        long long num = 0;
        int sign = 1;
        int result = 0;

        stack<int> stk;
        
        for(int i = 0 ; i < s.size() ; i++){
            if(isdigit(s[i])){
                num = (num * 10) + (s[i] - '0');
            }
            else if(s[i] == '+'){
                result += (num * sign);
                sign = 1;
                num = 0;
            }
            
            else if(s[i] == '-'){
                result += (num * sign);
                sign = -1;
                num = 0;
            }
            else if(s[i] == '('){
                stk.push(result);
                stk.push(sign);
                result = 0;
                sign = 1;
                num = 0;
            }
            else if(s[i] == ')'){

                result += (num * sign);
                num = 0;

                int sign = stk.top();
                stk.pop();
                int last_res = stk.top();
                stk.pop();

                result *= sign;
                result += last_res;
            }
        }
        result += (num * sign);
        return result;
    }
};