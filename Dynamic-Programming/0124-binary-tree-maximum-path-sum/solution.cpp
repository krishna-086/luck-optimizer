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
    int path(TreeNode* root, int& maxi){
        if(root==NULL) return 0;
        int l=path(root->left, maxi);
        int r=path(root->right, maxi);
        int sum=root->val+l+r;
        maxi=max(sum, maxi);
        int p=root->val+max(l,r);
        if(p<0) return 0;
        return p;
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        path(root, maxi);
        return maxi;
    }
};
