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
    ListNode *detectCycle(ListNode *head) {
       map<ListNode*,int>visited;
       ListNode*temp=head;
       while(temp!=NULL){
        if(visited[temp]==true){ 
            return temp;
        }
        else{
            visited[temp]=true;
            temp=temp->next;
        }
       }
       return nullptr;
    }
};