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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(!list1){
            return list2;
        }
        if(!list2){
            return list1;
        }

        if(list2->val < list1->val){
            swap(list1,list2);
        }
        ListNode*curr1=list1;
        ListNode*next1=curr1->next;
        ListNode*curr2=list2;
        ListNode*next2=curr2->next;

        while(curr2!=NULL && next1!=NULL){
            if(curr2->val >= curr1->val && curr2->val <= next1->val ){
                curr1->next=curr2;
                next2=curr2->next;
                curr2->next=next1;

                curr1=curr2;
                // next1=next1->next;
                curr2=next2;
            }
            else{
                curr1=curr1->next;
                next1=next1->next;
            }

        }
           if (curr2 != NULL) {
            curr1->next = curr2;
        }
        return list1;
        
    }
};