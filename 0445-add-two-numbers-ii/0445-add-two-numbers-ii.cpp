/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> l1stk;
        stack<int> l2stk;
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        while(temp1 != NULL){
            l1stk.push(temp1->val);
            temp1 = temp1->next;
        }

        while(temp2 != NULL){
            l2stk.push(temp2->val);
            temp2 = temp2->next;
        }

        ListNode* head = NULL;
        
        int carry = 0;

        while(!l1stk.empty() || !l2stk.empty() || carry){

            int sum = carry;
            
            if(!l1stk.empty()){
                sum += l1stk.top();
                l1stk.pop();
            }
            if(!l2stk.empty()){
                sum += l2stk.top();
                l2stk.pop();
            }

            int digit = sum % 10;
            carry = sum / 10;

            ListNode* newNode = new ListNode(digit);

            newNode->next = head;
            head = newNode;
        }
        return head;
    }
};