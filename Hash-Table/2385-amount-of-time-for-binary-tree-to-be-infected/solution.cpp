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
    int amountOfTime(TreeNode* root, int start) {
        unordered_set<TreeNode*> st;
        unordered_map<TreeNode*, TreeNode*> mp;
        queue<TreeNode*> q;
        TreeNode* s;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0; i<n; i++){
                TreeNode* t=q.front();
                if(t->val==start) s=t;
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
        q.push(s);
        st.insert(s);
        int c=-1;
        while(!q.empty()){
            int n=q.size();
            for(int i=0; i<n; i++){
                TreeNode* t=q.front();
                if(t->left && st.find(t->left)==st.end()){
                    q.push(t->left);
                    st.insert(t->left);
                }
                if(t->right && st.find(t->right)==st.end()){
                    q.push(t->right);
                    st.insert(t->right);
                }
                if(mp.find(t)!=mp.end() && st.find(mp[t])==st.end()){
                    q.push(mp[t]);
                    st.insert(mp[t]);
                }
                q.pop();
            }
            c++;

        }
        return c;
        
    }
};
