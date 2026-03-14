#include<iostream>
#include<vector>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val):data(val),left(nullptr),right(nullptr){}
};

class Solution
{
    public :
       bool searchtree(Node*,int);
};

bool Solution::searchtree(Node*root1,int val)
{
    //base case
    if(root1==nullptr)
    {
        return false ;
    }
    if(root1->data==val)
    {
        return ture;
    }
    // bool leftsearch=searchtree(root1->left);
    // bool rightsearch=searchtree(root1->right);
    // return (leftsearch ||rightsearch);
    
    //result returning with the recursion
   return(root1->data==val||searchtree(root1->left,val)||searchtree(root1->right,val));

}
int main()
{
    Node* root=new Node(10);
    root->left=new Node(5);
    root->left->left=new Node(3);
    root->right=new Node(15);
    Solution s;
   bool ans= s.searchtree(root,2);
 cout<<"the desired search :- "<<ans<<endl;

}