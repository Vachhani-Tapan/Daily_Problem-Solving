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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp != NULL){
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp; 
            temp = next;
        }

        return prev;


        // vector<int> ans;
        // ListNode* temp = head;
        // while(temp != NULL){
        //     ans.push_back(temp->val);
        //     temp = temp->next;
        // }
        // temp = head;
        // int i = ans.size() - 1;
        // while(temp){
        //     temp->val = ans[i--];
        //     temp = temp->next;
        // }
        // return head;
    }
};