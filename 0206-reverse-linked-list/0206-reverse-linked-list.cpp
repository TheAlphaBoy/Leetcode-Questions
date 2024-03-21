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
    ListNode* reverseList(ListNode* head) {

        //.....iterative method......

        // sol 1: Brute force 

        // vector<int>data;
        // for(ListNode* curr=head;curr!=NULL;curr=curr->next){
        //     data.push_back(curr->val);
        // }
        // for(ListNode* curr=head;curr!=NULL;curr=curr->next){
        //     curr->val=data.back();
        //     data.pop_back();
        // }
        // return head;

        // sol 2: Optimized way 

        // ListNode* prev = NULL;
        // ListNode* curr = head;
        // while(curr!=NULL){
        //     ListNode* temp = curr->next;
        //     temp=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=temp;
        // }
        // return prev;

        // ....... Recursive Method........
        //Base case
        // if(head==NULL || head->next==NULL){
        //     return head;
        // }
        // ListNode* newhead=reverseList(head->next);
        // ListNode* temp=head->next;
        // temp->next=head;
        // head->next=NULL;

        // return newhead;

        // Revision :

        // BC 
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* newHead=reverseList(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;
        return newHead;
    }
};


























