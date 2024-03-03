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

// Ref : Striver

    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // Brute force Approach TC = O(n) + O(cnt-n) , means O(n*n)

        // ListNode* temp = head;
        // int cnt=0;
        // while(temp != nullptr){
        //     ++cnt;
        //     temp = temp->next;
        // }
        // int res = cnt-n;
        // // Edge case
        // if(cnt==n){
        //     ListNode* newHead = head->next;
        //     delete(head); // Deleting this because without deleting it causes memory leakage
        //     return newHead;
        // }
        // temp=head;
        // while(temp != nullptr){
        //     --res;
        //     if(res==0){
        //         break;
        //     }
        //     temp=temp->next;
        // }
        // ListNode* delnode = temp->next;
        // temp->next = temp->next->next;
        // delete(delnode);
        // return head;

        // Optimized Approach T.C. => O(n)
        // SC => O(1) ,Bcz no extra space taken
        
        ListNode* fast = head;
        ListNode* slow = head;
        for(int i=0;i<n;++i){
            fast = fast->next;
        }
        // Edge case
        if(fast == nullptr){
            ListNode* newHead = head->next;
            delete(head);
            return newHead;
        }
        while(fast->next != nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* delnode = slow->next;
        slow->next = slow->next->next;
        delete(delnode);
        return head;
    }
};