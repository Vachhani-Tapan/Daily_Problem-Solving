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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // step - 01 count total node in list
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        // step - 02 remove the n from count to get the number of node whose next element we have to remove
        count -= n;

        // step - 03 check if the count is zero then we have to remove the 1st node for the edge case this if runs
        if(count == 0){
            head = head->next;
            delete temp;
            return head;
        }

        ListNode* prev = NULL;
        temp = head;

        // step - 04 to count-- to get to the number prev to the node we have to delete and maintain prev and temp pointer 
        while(count--){
            prev = temp;
            temp = temp->next;
        }

        // step - 05 break the node between the number before we have to remove and attach that with the next of the curr deleting node
        prev->next = temp->next;
        delete temp;
        return head;
    }
};