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
    int d=0;
    int dm(TreeNode* root){
        if(!root) return 0;
        int left=dm(root->left);
        int right=dm(root->right);
        d=max(left+right,d);
        return 1+max(left, right);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dm(root);
        return d;
    }
};
