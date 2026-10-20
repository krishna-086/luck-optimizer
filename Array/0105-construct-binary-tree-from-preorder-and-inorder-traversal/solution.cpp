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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int, int> mp;
        for(int i=0; i<inorder.size(); i++){
            mp[inorder[i]]=i;
        }
        TreeNode *root=build(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, mp);
        return root;
    }
    TreeNode* build(vector<int>& preorder, int preSt, int preEnd, vector<int>& inorder, int inSt, int inEnd, map<int, int>& mp){
        if(preEnd<preSt || inEnd<inSt) return NULL;
        TreeNode* root = new TreeNode(preorder[preSt]);
        int inroot=mp[root->val];
        int left=inroot-inSt;
        root->left=build(preorder,preSt+1, preSt+left, inorder, inSt, inroot-1, mp);
        root->right=build(preorder, preSt+left+1, preEnd, inorder, inroot+1, inEnd, mp);
        return root;
    }
};
