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
    unordered_map<TreeNode*, int> dp;
    int rb(TreeNode* root){
        if(!root) return 0;
        if(dp.find(root)!=dp.end()){
            return dp[root];
        }
        int pick=root->val;
        int npick=0;
        if(root->left){
            pick+=rb(root->left->left);
            pick+=rb(root->left->right);
        } 
        if(root->right){
            pick+=rb(root->right->left);
            pick+=rb(root->right->right);
        }
        
        npick+=rb(root->left);
        npick+=rb(root->right);
        return dp[root]=max(pick, npick);
    }
    int rob(TreeNode* root) {
        int res=rb(root);
        return res;
    }
};
