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

// Sol 1 : reversing the half Linked List from last and the joining the nodes respectively
// TC => O(N) , SC => Auxilary Space O(1) , System space O(N) 

    void reorderList(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return;
        }

        ListNode* curr=head;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while(fast && fast->next){
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        ListNode* tail = reverseLL(slow);
        while(tail->next != NULL){
            ListNode* temp = curr->next;
            ListNode* tailtemp = tail->next;
            curr->next = tail;
            tail->next = temp;
            curr=temp;
            tail=tailtemp;
        }
    }
    ListNode* reverseLL(ListNode* head){
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* newHead = reverseLL(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }
};