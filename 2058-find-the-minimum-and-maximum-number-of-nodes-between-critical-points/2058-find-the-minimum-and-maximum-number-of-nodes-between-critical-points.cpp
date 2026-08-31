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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if(head == NULL || head->next->next == NULL){
            return {-1,-1};
        }

        ListNode* prev = head;
        ListNode* curr = head->next;

        int firstCritical = -1;
        int lastCritical = -1;
        int minDist = INT_MAX;
        int idx = 1;
        
        while(curr->next != NULL){

            ListNode* next = curr->next;

            bool isMax = curr->val > prev->val && curr->val > next->val;
            bool isMin = curr->val < prev->val && curr->val < next->val;

            if(isMax || isMin){
                if(lastCritical == -1){
                    firstCritical = idx;
                }
                else{
                    minDist = min(minDist , idx - lastCritical);
                }

                lastCritical = idx;
            }

            prev = curr;
            curr = next;
            idx++;
        }

        if(firstCritical == -1 || firstCritical == lastCritical){
            return {-1, -1};
        }

        int maxDist = lastCritical - firstCritical;

        return {minDist, maxDist};
    }
};