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
    int height(TreeNode* root) {
        if(root == NULL) return 0;
        int left = height(root->left);
        int right = height(root->right);
        return max(left, right) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int leftt = diameterOfBinaryTree(root->left);
        int rightt = diameterOfBinaryTree(root->right);
        int curr = height(root->left) + height(root->right);
        return max(max(leftt, rightt), curr);
    }
};