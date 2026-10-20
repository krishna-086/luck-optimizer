/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_set<TreeNode*> st;
        unordered_map<TreeNode*, TreeNode*> mp;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0; i<n; i++){
                TreeNode* t=q.front();
                if(t->left){
                    mp[t->left]=t;
                    q.push(t->left);
                }
                if(t->right){
                    mp[t->right]=t;
                    q.push(t->right);
                }
                q.pop();
            }
        }
        q.push(target);
        st.insert(target);
        for(int i=0; i<k; i++){
            int n=q.size();
            for(int i=0; i<n; i++){
                TreeNode* t=q.front();
                if(t->left && st.find(t->left)==st.end()){
                    st.insert(t->left);
                    q.push(t->left);
                }
                if(t->right && st.find(t->right)==st.end()){
                    st.insert(t->right);
                    q.push(t->right);
                }
                if(mp.find(t)!=mp.end() && st.find(mp[t])==st.end()){
                    st.insert(mp[t]);
                    q.push(mp[t]);
                }
                q.pop();
            }
        }
        vector<int> res;
        while(!q.empty()){
            res.push_back(q.front()->val);
            q.pop();
        }
        return res;
    }
};
