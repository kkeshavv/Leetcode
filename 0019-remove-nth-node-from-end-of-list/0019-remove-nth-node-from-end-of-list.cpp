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
    ListNode* removeNthFromEnd(ListNode* head, int n) {


        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*forward=curr->next;


        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        
     head = prev;
        if(n==1){
            ListNode*temp=head;
            head=head->next;
            temp->next=NULL;
        }
        else{
            ListNode*curr=head;
            ListNode*prev=NULL;

            int cnt=1;

            while(cnt < n){
                prev=curr;
                curr=curr->next;
                cnt++;
            }
             prev -> next = curr -> next; 
             curr -> next  = NULL;
        }
    
        curr = head;
        prev = NULL;
        forward = NULL;

        while (curr != NULL) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        // Return the updated list
        return prev;        
    }
};