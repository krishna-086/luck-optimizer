/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 **/
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
    void smal(TreeNode* root, int& k, int& sm){
        if(root==NULL || k==0) return;
        smal(root->left, k, sm);
        k--;
        if(k==0){
            sm=root->val;
            return;
        };
        smal(root->right, k, sm);
        return;
    }
    int kthSmallest(TreeNode* root, int k) {
        int sm;
        smal(root, k, sm);
        return sm;

    }
};
