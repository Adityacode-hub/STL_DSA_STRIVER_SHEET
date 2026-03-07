#include<iostream>
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
    
    bool ismirror(Node* root1,Node* root2);
    Node* inverttree(Node* root);
};

bool Solution::ismirror(Node* root1,Node* root2)
{
   if(root1==nullptr&&root2==nullptr)
   {
    return true;
   }
   if(root1==nullptr||root2==nullptr)
   {
    return false;
   }
    
        return(root1->data==root2->data)&& ismirror(root1->left,root2->right)&& ismirror(root1->right,root2->left);
    
}
Node* Solution::inverttree(Node* root)
{
    
    if(root==nullptr)
    {
        return nullptr;
    }
    
    Node* temp=root->left;
    root->left=root->right;
    root->right=temp;
    cout<<root->data<<" ";
    inverttree(root->left);
    inverttree(root->right);
    return root;
}
int main()
{
    Node* root = new Node(1);//which will have the left data right is the three thing inside the node any evrytime we are creating the  new node
    root->left = new Node(2);
root->right = new Node(3);
    Solution s;
  s.inverttree(root);
   
    cout<<"root inverted successfully";
    return 0;
}