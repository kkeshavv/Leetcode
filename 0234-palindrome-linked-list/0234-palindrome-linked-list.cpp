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

    bool palindromecheck(vector<int>ans){
        int n=ans.size();
        int s=0;
        int e=n-1;

        while(s<=e){
            if(ans[s]!=ans[e]){
                return false;
            }
           
            s++;
            e--;
        }
         return true;
    }

    bool isPalindrome(ListNode* head) {
        ListNode*curr=head;
        vector <int> ans;
        while(curr!=NULL){
            ans.push_back(curr->val);
            curr=curr->next;
        }
return palindromecheck(ans);
    }


};