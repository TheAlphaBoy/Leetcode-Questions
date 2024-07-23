/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

        // TC => O(1) & SC => O(1)

        node->val=node->next->val;
        ListNode* temp = node->next;
        node->next=node->next->next;
        delete(temp);        
    }
};