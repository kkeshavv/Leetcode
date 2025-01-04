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
    
    ListNode*reverselinkedlist(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* forward=NULL;
        while(curr != NULL){
            ListNode* forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }

    ListNode* kthnode(ListNode* temp,int k){
        while(temp != NULL && k>1){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevlast=NULL;
        while(temp!=NULL){
            ListNode*getkthnode=kthnode(temp,k);
            if(getkthnode==NULL){ 
                
                if(prevlast) prevlast->next=temp;
                break;
            }
            else{
                ListNode*nextnode=getkthnode->next; 
                 getkthnode->next=NULL;
                reverselinkedlist(temp);
                if(head==temp){
                    head=getkthnode;
                }
                else{
                    prevlast->next=getkthnode;
                }
                prevlast=temp;
                temp=nextnode;

            }
        }
        return head;
    }
};