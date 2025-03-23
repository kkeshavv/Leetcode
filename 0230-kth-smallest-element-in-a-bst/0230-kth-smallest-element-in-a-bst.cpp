/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


class Solution {
private:
int count = 0;  // Counter for nodes visited
int result = -1;  // Stores kth smallest value
void inordertraversal(TreeNode* root, int k){
    if (!root) return;
    inordertraversal(root->left,k);
    count++;
    if(count==k){
        result=root->val;
        return;
    }
    inordertraversal(root->right,k);
}
public:
    int kthSmallest(TreeNode* root, int k) {
        inordertraversal(root,k);
        return result;
    }
};