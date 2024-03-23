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
    // bool isPalindrome(ListNode* head) {

        //  Sol 1 : Brute Force
        // TC => O(N) , SC => O(N)

        // vector<int> v;            
        // while(head != nullptr){                
        //     v.push_back(head -> val);                
        //     head = head -> next;              
        // }         
        // for(int i = 0; i < v.size() / 2; i++){                
        //     if(v[i] != v[v.size() - i - 1]){                    
        //         return false;                    
        //     }                
        // }            
        // return true;

    // }

    // Sol 2 : Half ko reverse kardo and usko alag kardo linked list se and compare karo
    // TC => O(N)
    // SC => O(1)

    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;

        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* tail=reverseLL(slow);
        prev->next=NULL;
        while(tail != NULL && head != NULL){
            if(tail->val != head->val){
                return false;
            }
            tail=tail->next;
            head=head->next;
        }
        return true;
    }
    ListNode* reverseLL(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* newHead=reverseLL(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;
        return newHead;
    }

};






















