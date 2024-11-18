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
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode*curr=head;
        int size=0;
        while(curr!=NULL){
            size++;
            curr=curr->next;
        }
        curr=head;
        int ans=(size/2);

        for(int i=0;i<ans;i++){
            curr=curr->next;  
        }  
        return curr;     
    }
};