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
    int pathSum(TreeNode* root, int targetSum) {
        map<long long, int> mp;
        mp[0]=1;
        int c=0;
        path(root, targetSum, 0, mp, c);
        return c;
    }
    void path(TreeNode* root, int t, long long s, map<long long, int>& mp, int& c){
        if(root==NULL) return;
        s+=root->val;
        long long more=s-t;
        if(mp.find(more)!=mp.end()){
            c+=mp[more];
        }
        mp[s]++;
        path(root->left, t, s, mp, c);
        path(root->right, t, s, mp, c);
        mp[s]--;
    }
};
