class Solution {
    int res = 0;
    void conv(TreeNode* root) {
        if (!root) return;
        conv(root->right);
        root->val += res;
        res = root->val;
        conv(root->left);
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        res = 0;
        conv(root);
        return root;
    }
};
