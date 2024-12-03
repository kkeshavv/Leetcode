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

    ListNode*merge(ListNode*l1,ListNode*l2){
        if(!l1) return l2;
        if(!l2) return l1;

        if(l1->val < l2->val){
            l1->next=merge(l1->next,l2);
            return l1;
        }
        else{
            l2->next=merge(l1,l2->next);
            return l2;
        }
    }

    ListNode* findmiddle(ListNode*head){
        ListNode*slow=head; 
        ListNode*fast=slow->next;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow; 
    }

    
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* middle = findmiddle(head);
        ListNode*lefthead=head;
        ListNode*righthead=middle->next;
        middle->next=NULL;

        lefthead=sortList(lefthead);
        righthead=sortList(righthead);

       return merge(lefthead,righthead);



    }
}; 