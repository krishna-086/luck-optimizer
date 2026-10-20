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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int, int> mp;
        for(int i=0; i<inorder.size(); i++){
            mp[inorder[i]]=i;
        }
        int pos=postorder.size()-1;
        TreeNode *root= build(postorder, 0, inorder.size()-1, pos, mp);
        return root;
    }
    TreeNode* build(vector<int>& postorder, int s, int e, int& pos, map<int, int>& mp){
        if(s>e) return NULL;
        TreeNode *root=new TreeNode(postorder[pos--]);
        int inroot=mp[root->val];
        root->right=build(postorder, inroot+1, e, pos, mp);
        root->left=build(postorder, s, inroot-1, pos, mp);
        
        return root;

    }
};
