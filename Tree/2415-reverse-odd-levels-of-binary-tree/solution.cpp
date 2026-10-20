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
    TreeNode* reverseOddLevels(TreeNode* root) {
        // If the tree has only one node, there's nothing to reverse.
        if (root == nullptr || root->left == nullptr || root->right == nullptr) 
            return root;

        // Perform level traversal with two nodes to reverse values on odd levels
        levelTraverse(root->left, root->right, 0);
        return root;
    }

private:
    void levelTraverse(TreeNode* node1, TreeNode* node2, int level) {
        if (node1 == nullptr || node2 == nullptr)
            return;
        
        // If the current level is odd, swap the node values
        if (level % 2 == 0) {
            int temp = node1->val;
            node1->val = node2->val;
            node2->val = temp;
        }

        // Recur for the next level (swap left of node1 with right of node2 and vice versa)
        levelTraverse(node1->left, node2->right, level + 1);
        levelTraverse(node1->right, node2->left, level + 1);
    }
};
