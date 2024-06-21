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
    ListNode* middleNode(ListNode* head) {

        // sol 1:

        // ListNode *slow=head,*fast=head;
        // while(fast && fast->next){
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }
        // return slow;

        // sol 2: 

        // ListNode* temp=head;
        // int length=0;
        // while(temp){
        //     length++;
        //     temp=temp->next;
        // }
        // temp=head; // Re-Initialising
        // int half=length/2;
        // while(temp && half--){ // don't do --half as ye pehle decreament karenga then 
        // check karega ieteration jisse answer wrong aa sakta hai
        //     temp=temp->next;
        // }
        // return temp;

        // Revision : 
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};



























