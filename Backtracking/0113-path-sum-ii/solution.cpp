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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> temp;
        path(root, targetSum, temp, res);
        return res;
    }
private:
    void path(TreeNode* root, int t, vector<int>& temp, vector<vector<int>>& res){
        if(root==NULL) return;
        t-=root->val;
        temp.push_back(root->val);
        if(!root->left && !root->right){
            if(t==0) res.push_back(temp);
            temp.pop_back();
            return;
        }
        path(root->left,t, temp, res);

        path(root->right,t,temp,res);
        temp.pop_back();
        return;
    }
};
