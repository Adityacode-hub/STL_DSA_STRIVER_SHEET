#include<iostream>
#include<vector>
using namespace std;
struct Node
{
 int data;
 Node* left;
 Node* right;
 Node(int val):data(val),left(nullptr),right(nullptr){}
};
class Solution
{
public:
bool balance =true;
   int balancetree(Node* root)
   {
    if(root==nullptr)
    {
        return 0;
    }
    int lefttree=balancetree(root->left);
    int righttree=balancetree(root->right);
    if(abs(lefttree-righttree)>1)
    {
        balance=false;
    }
    return 1+max(lefttree,righttree);
   }
  int minimumbalancetree(Node*root)
  {
    if(root==nullptr)
    {
        return 0;
    }
//for the single node
    if(root->left==nullptr&&root->right==nullptr)
    {
        return 1;
    }
    //if the left node has nullptr
    if(root->left==nullptr)
    {
        return 1+minimumbalancetree(root->right);
    }
    //if the right node has the nullptr
   if(root->right==nullptr)//agar null ptr toh count mt karo usko leave it go to other branch
   {
    return 1+minimumbalancetree(root->left);
   }
   //both have the left and righ subtree then go for this path
   return 1+min(minimumbalancetree(root->left),minimumbalancetree(root->right));
  }
};
int main()
{
 Node* root=new Node(1);
 root->left=new Node(2);
 root->right=new Node(3);
 root->left->left=new Node(4);
 root->left->right=new Node(5);
 root->left->left->left=new Node(6);
 Solution s;
 cout<<s.balancetree(root)<<endl;
 cout<<s.minimumbalancetree(root);

}