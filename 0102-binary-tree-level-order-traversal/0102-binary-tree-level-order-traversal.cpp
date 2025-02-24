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
void helper(TreeNode* root, vector<vector<int>> &ans) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<int> level; // Stores node values at the current level

        for (int i = 0; i < size; i++) {
            TreeNode* temp = q.front();
            q.pop();

            level.push_back(temp->val); // Store node value

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }

        ans.push_back(level); // Add current level values to result
    }
}

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        helper(root, ans);
        return ans;
    }
};