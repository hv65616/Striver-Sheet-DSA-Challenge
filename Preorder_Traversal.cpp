#include <bits/stdc++.h>
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void preorder(TreeNode *root, vector<int> &vt)
{
    if (root == NULL)
        return;
    vt.push_back(root->data);
    preorder(root->left, vt);
    preorder(root->right, vt);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int> vt;
    preorder(root, vt);
    return vt;
}