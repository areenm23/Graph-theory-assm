 // Definition for a binary tree node.
 #include<bits/stdc++.h>
 using namespace std;
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
    int lev(TreeNode* root){
        if(root==NULL) return 0;
        return max(lev(root->left),lev(root->right))+1;
    }
    void zz(TreeNode* root,vector<int> &v,int l,int c){
        if(root==NULL) return;
        if(l==c){v.push_back(root->val);
        return; }
        zz(root->left,v,l,c+1);
        zz(root->right,v,l,c+1);
    }
    void yy(TreeNode* root,vector<int> &v,int l,int c){
        if(root==NULL) return;
        if(l==c){v.push_back(root->val);
        return; }
        yy(root->right,v,l,c+1);
        yy(root->left,v,l,c+1);
    }
    void lec(TreeNode* root,vector<vector<int>> &li){
        int i;
        int n=lev(root);
        for(i=1;i<=n;i++){
            vector<int> v;
            if(i%2) zz(root,v,i,1);
            else yy(root,v,i,1);
            li.push_back(v);
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> li;
        lec(root,li);
        return li;
    }
};