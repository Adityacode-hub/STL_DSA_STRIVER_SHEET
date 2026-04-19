#include<iostream>
#include<vector>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val):data(val),left(nullptr),right(nullptr){}
};
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) 
    {
        //base case
        if(root==nullptr)
        {
            return 0;
        }
       //recursive case
       //it will give the height of the binary tree
       int leftchild=diameterOfBinaryTree(root->left);
       int rightchild=diameterOfBinaryTree(root->right);
       int op1=leftchild+rightchild;//this is the sum 
       int op2=diameterOfBinaryTree(root->right);
       

          //result printing or returning

    }
};

int main()
{
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->right->right=new TreeNode(5);
    Solution s;
    s.diameterOfBinaryTree(root);
    cout<<"the diameter of the tree node is:- " << endl;
}