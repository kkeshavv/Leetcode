/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<map>
class Solution {
public:
    bool hasCycle(ListNode *head) {
    if(head==NULL || head->next==NULL){
        return false;
    }
    map<ListNode*,bool>visited;

    ListNode*temp=head;

    while(temp != NULL){
        if(visited[temp]==true){ 
            return true;
        }
        else{
            visited[temp]=true;
            temp=temp->next;
        }
        
    }

     return false;   
    }
};