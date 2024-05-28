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
    bool sear(TreeNode* root,TreeNode*r){
        if(root==NULL) return false;
        if(root==r) return true;
        return sear(root->left,r)|sear(root->right,r);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL||root==p||root==q) return root;
        bool pl=sear(root->left, p);
        bool ql=sear(root->left, q);
        if (pl!=ql) return root;
        if (pl) return lowestCommonAncestor(root->left,p,q);
        return lowestCommonAncestor(root->right,p,q);
    }
};