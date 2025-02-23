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

void postordertraversal(TreeNode* root,vector<int> &postorder){
    if(root==NULL) return;

    postordertraversal(root->left,postorder);
    postordertraversal(root->right,postorder);
    postorder.push_back(root->val);
    
}
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        postordertraversal(root,postorder);
        return postorder;
    }
};