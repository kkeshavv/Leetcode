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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1=l1;
        ListNode* head2=l2;

        ListNode* dummyhead=new ListNode(-1);
        ListNode* curr=dummyhead;

        int carry=0;
        while(head1 != NULL || head2!=NULL){
            int sum=carry;

            if(head1) sum+=head1->val;
            if(head2) sum+=head2->val;

            ListNode* newNode=new ListNode(sum%10);
            carry=sum/10;

            curr->next=newNode;
            curr=curr->next;

            if(head1) head1=head1->next;
            if(head2) head2=head2->next;

        }


        if(carry){
            ListNode*newNode= new ListNode(carry);
            curr->next=newNode;
        }
        return dummyhead->next;

    }
};