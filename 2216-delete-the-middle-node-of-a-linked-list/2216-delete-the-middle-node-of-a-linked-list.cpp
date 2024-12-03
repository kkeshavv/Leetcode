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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*curr=head;
        ListNode*prev=NULL;

        if(head==NULL || head->next==NULL){
            return NULL;
        }

        int size=0;
        while(curr!=NULL){
            size++;
            curr=curr->next; 
        }
        curr=head;
        int i=0;
        int middle=size/2;
        while(i < middle){ 
            prev=curr;
            curr=curr->next;
            i++;
        }
         prev -> next = curr -> next; 
        curr -> next  = NULL;

        return head;
        
    }
};