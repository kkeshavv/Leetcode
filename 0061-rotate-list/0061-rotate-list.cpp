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
    ListNode* rotateRight(ListNode* head, int k) {
       ListNode*temp=head;
       int size=1;
       while(temp != NULL && temp->next != NULL){
        size++;
        temp=temp->next;
       } 
       if(!head || !head->next || k==0) return head;
        temp->next=head;
        k=k%size;
        k=size-k;
        while(k--) temp=temp->next;
        head=temp->next;
        temp->next=NULL;

        return head;
    }
};