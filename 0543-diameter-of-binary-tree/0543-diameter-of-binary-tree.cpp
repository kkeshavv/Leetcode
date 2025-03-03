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
public:
    vector<int> diameters; // Stores leftDepth + rightDepth for each node

    int depth(TreeNode* root) {
        if (!root) return 0;

        int leftDepth = depth(root->left);
        int rightDepth = depth(root->right);

        diameters.push_back(leftDepth + rightDepth); // Store diameter for this node

        return 1 + max(leftDepth, rightDepth); // Return height of subtree
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;

        depth(root); // Compute diameters at each node

        return *max_element(diameters.begin(), diameters.end()); // Return max diameter
    }
};