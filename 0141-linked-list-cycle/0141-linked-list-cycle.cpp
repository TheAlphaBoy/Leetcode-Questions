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
    bool hasCycle(ListNode *head) {

        // Floyd's Cycle Detection Algorithm : Jaha slow and fast pointers meet ho jaye vha
        // loop present hoga

        // Edge case
        // if(head==NULL){
        //     return false;
        // }

        // ListNode* slow=head;
        // ListNode* fast=head;
        // while(slow->next!=NULL && fast->next!=NULL && fast->next->next != NULL){
        //     slow=slow->next;
        //     fast=fast->next->next;
        //     if(slow==fast){
        //         return true;
        //     }
        // }
        // return false;

        // Revision :

        // Edge case
        if (head==NULL) return false;

        ListNode* slow=head;
        ListNode* fast=head;
        while(slow->next && fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
};





















