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
 #include<bitset>
#include<cmath>

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int result = 0;
        ListNode* curr = head;

        // Traverse the linked list and compute the decimal value
        while (curr != NULL) {
            result = result * 2 + curr->val; // Shift left and add current binary digit
            curr = curr->next;
        }

        return result; // Return the computed decimal value
    }
};
