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

private:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* current = head;

        while (current) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }

public:
    int pairSum(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return 0;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = reverseList(slow);
        ListNode* first = head;

        int sum = INT_MIN;
        while (second != NULL) {
            sum = max(sum, first->val + second->val);
            first = first->next;
            second = second->next;
        }

        return sum;
    }
};