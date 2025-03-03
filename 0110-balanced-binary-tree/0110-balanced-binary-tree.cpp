class Solution {
public:
    int checkHeight(TreeNode* root) {
        if (!root) return 0; // Base case: Height of empty tree is 0

        int leftHeight = checkHeight(root->left);
        if (leftHeight == -1) return -1; // Left subtree is unbalanced

        int rightHeight = checkHeight(root->right);
        if (rightHeight == -1) return -1; // Right subtree is unbalanced

        if (abs(leftHeight - rightHeight) > 1) return -1; // Current node is unbalanced

        return 1 + max(leftHeight, rightHeight); // Return height of subtree
    }

    bool isBalanced(TreeNode* root) {
        int ans=checkHeight(root);
        if(ans == -1){
            return false;
        }
        return true;

    }
};
