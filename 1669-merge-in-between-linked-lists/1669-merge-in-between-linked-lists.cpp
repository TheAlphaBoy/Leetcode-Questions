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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        // Ref : https://youtu.be/wIC9enD8Wzg?si=bV7lYI5w5UY6ZbHx

        // TC => O(N+M), do baar linked list ko traverse kre hai , ek baar list 1 and second list 2
        //SC => O(1)

        ListNode* left=NULL;
        ListNode* right=list1;
        for(int i=0;i<=b;++i){
            if(i==a-1){
                left=right;
            }
            right=right->next;
        }
        left->next=list2;
        ListNode* temp=list2;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=right;
        return list1;
    }
};