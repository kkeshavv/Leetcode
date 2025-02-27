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
        ListNode*prev1=NULL; 
        ListNode*curr=head;
        ListNode*forward=NULL;
        // ListNode*curr1=curr;

        while(curr!=NULL){
            forward=curr->next;
           curr->next=prev1; 
           prev1=curr; 
           curr=forward;
        }
        return prev1;
    }
};