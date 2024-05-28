
 // Definition for a binary tree node.
 #include<bits/stdc++.h>
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 

class Solution {
public:
    TreeNode* temp=NULL;
    void check(TreeNode* root,int val){
        if(root==NULL) return;
        if(root->val==val){
            temp=root;
            return;
        }
        else if(root->val > val) check(root->left,val);
        else check(root->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        check(root,val);
        return temp;
    }
};