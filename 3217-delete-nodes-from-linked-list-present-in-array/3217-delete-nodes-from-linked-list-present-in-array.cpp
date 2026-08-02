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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_map<int, int> freq;
        ListNode* dummyNode = new ListNode(-1);

        for (auto k : nums) {
            freq[k]++;
        }

        ListNode* curr = dummyNode;
        ListNode* temp = head;
        ListNode* prev = NULL;

        while (temp) {
            if (freq.find(temp->val) == freq.end()) {
                curr->next = temp;
                curr = curr->next;
            }
            temp = temp->next;
        }

        curr->next = NULL;

        return dummyNode->next;
    }
};