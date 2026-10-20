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
              void valid(TreeNode* root, long long& prev, int& flag ){
                      if(root==NULL || flag==0){
                                  return;
                                          } 
                                                  valid(root->left, prev, flag);
                                                          if(prev>=root->val){
                                                                      flag=0;
                                                                                  return;
                                                                                          }
                                                                                                  prev=root->val;
                                                                                                          valid(root->right, prev, flag);
                                                                                                              }
                                                                                                                  bool isValidBST(TreeNode* root) {
                                                                                                                          
                                                                                                                                  int flag=1;
                                                                                                                                          long long prev=LLONG_MIN;
                                                                                                                                                  valid(root, prev, flag );
                                                                                                                                                          if(flag==1) return true;
                                                                                                                                                                  return false;
                                                                                                                                                                      }
                                                                                                                                                                      };
