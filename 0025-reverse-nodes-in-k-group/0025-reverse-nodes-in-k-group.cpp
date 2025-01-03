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
        ListNode* temp=head;
        ListNode* prev=NULL;        
        while(temp!=NULL){
        ListNode* nextNode = temp->next;
        temp->next = prev;               
        prev = temp;                    
        temp = nextNode; 
        }
        return prev;
    }

    ListNode*getkthnode(ListNode* temp,int k){
        while(temp!=NULL && k>1){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp=head;
        ListNode*prevlast=NULL;
        while(temp!=NULL){
            ListNode*kthnode=getkthnode(temp, k);
            if(kthnode==NULL){
            if(prevlast) prevlast->next=temp;
                break;
            }
            else{
                ListNode*nextnode=kthnode->next;
                kthnode->next=NULL;
                reverselinkedlist(temp);
                if(temp==head){
                    head=kthnode;
                }
                else{
                    prevlast->next=kthnode;
                }

                prevlast=temp;
                temp=nextnode;

            }
        }
        return head;
    }
};