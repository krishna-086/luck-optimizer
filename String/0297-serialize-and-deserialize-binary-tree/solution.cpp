/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Codec {
public:

    string serialize(TreeNode* root) {
        string s;
        dfs(root, s);
        return s;
    }

    void dfs(TreeNode* root, string& s) {
        if(root == NULL) {
            s += "N,";
            return;
        }

        s += to_string(root->val) + ",";
        dfs(root->left, s);
        dfs(root->right, s);
    }

    TreeNode* deserialize(string data) {
        vector<string> v;
        string cur = "";

        for(char c : data) {
            if(c == ',') {
                v.push_back(cur);
                cur = "";
            }
            else {
                cur += c;
            }
        }

        int idx = 0;
        return build(v, idx);
    }

    TreeNode* build(vector<string>& v, int& idx) {
        if(v[idx] == "N") {
            idx++;
            return NULL;
        }

        TreeNode* root = new TreeNode(stoi(v[idx]));
        idx++;

        root->left = build(v, idx);
        root->right = build(v, idx);

        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
