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
    bool isPalindrome(ListNode* head) {
        // count the total node in list 

        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        if(count == 1){
            return true;
        }

        // breaking the list from the middle element
        count /= 2;
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(count--){
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;

        // reverse the another half part in the list
        ListNode* front = NULL;
        while(curr != NULL){
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        ListNode* head1 = head;
        ListNode* head2 = prev;

        while(head1){
            if(head1->val != head2->val){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
};