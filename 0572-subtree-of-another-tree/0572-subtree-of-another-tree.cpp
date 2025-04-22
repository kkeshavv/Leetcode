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

void tree1(TreeNode* root,vector<int>& t1) {
    if (!root) {
        t1.push_back(-2);  // Use -1 to represent NULL nodes
        return;
    }

    // Push current node value
    t1.push_back(root->val);

    // Recursively call for left and right subtrees
    tree1(root->left, t1);
    tree1(root->right, t1);
}

void tree2(TreeNode* subRoot, vector<int>& t2) {
    if (!subRoot) {
        t2.push_back(-2);  // Use -1 to represent NULL nodes
        return;
    }

    // Push current node value
    t2.push_back(subRoot->val);

    // Recursively call for left and right subtrees
    tree2(subRoot->left, t2);
    tree2(subRoot->right, t2);
}

class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    
        vector<int>t1;
        vector<int>t2;
        tree1(root,t1);
        tree2(subRoot,t2);

        return search(t1.begin(), t1.end(), t2.begin(), t2.end()) != t1.end();
        
    
    }
};