#include <iostream>
#include <vector>
using namespace std;

struct TreeNode
{
    int data;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution
{
    void inorder(TreeNode *root)
    {
        vector<int> temp;
        if (root == nullptr)
        {
            return;
        }

        inorder(root->left);
        temp.push_back(root->data);
        inorder(root->right);
    }
    bool fun(TreeNode * root,int k)
    {
        if(root== nullptr)
        {
            return false;
        }
        TreeNode* t= root;
        while ()
        {
            /* code */
        }
        
    }
};
