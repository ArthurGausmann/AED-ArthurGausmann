/*
Trabalho Pratico 3 - Arthur Campello Gausmann

LeetCode 701
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    if(root == NULL) {
        return root;
    }
    if(root->val > val) {
        root->left = insertIntoBST(root->left, val);
    } else {
        root->right = insertIntoBST(root->right, val);
    }
    return root;    
}