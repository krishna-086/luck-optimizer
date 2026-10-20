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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL) return res;
        queue<TreeNode*> q;
        bool flag=false;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> tp;
            for(int i=0; i<n; i++){
                TreeNode* temp=q.front();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                tp.push_back(temp->val);
                q.pop();
            }
            if(flag==true){
                reverse(tp.begin(), tp.end());
                flag=false;
            }
            else flag=true;
            res.push_back(tp);
        }
        return res;
    }
};
