// traversal of tree

#include<iostream>
#include<algorithm>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val);
    //    Node(int val):data(val),left(nullptr),right(nullptr){}  this is the initialiser list
    ~Node();
    void inorder(Node* root);
    void preorder(Node* root);
    void postorder(Node* root);
    Node* insert(Node* root, int val);
    int height(Node* root);
    int count(Node*root);
    int sumNode(Node*root);
    bool isidentical(Node*root1,Node*root2);
};

// constructor
Node::Node(int val) {
    data = val;
    left = nullptr;
    right = nullptr;
}
//Distructor
Node::~Node()
{
    delete left;
    delete right;
    cout<<"Deleting node :-"<<data<<endl;
}
// inorder traversal
void Node::inorder(Node* root) {

    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
//preorder
void Node::preorder(Node* root)
{
    if(root==nullptr)
      return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
//postorder
void Node::postorder(Node* root)
{
    if(root==nullptr)
    {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

// BST insertion
Node* Node::insert(Node* root, int val) {

    if (root == nullptr)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}
//height of the binary tree basically post order traversal
int Node::height(Node* root)
{
    if(root==nullptr)
    {
        return 0 ;
    }
    int leftht=height(root->left);//left
    int rightht=height(root->right);//right
    return max(leftht,rightht)+1;//root
}
//counting the nodes this is also the postorder traversal
int Node::count(Node*root)
{
    if(root==nullptr)
    {
        return 0;
    }
 int leftct=count(root->left);
 int rightct=count(root->right);
 return leftct+rightct+1;
}
//sum of the node
int Node:: sumNode(Node*root)
{
    if(root==nullptr)
    {
        return 0;
    }
    int leftct=sumNode(root->left);
    int rightct=sumNode(root->right);
    int sum=leftct+rightct;
    return sum+root->data;
}
bool Node::isidentical(Node*root1,Node*root2)
{
      if (!root1 && !root2)
        return true;

    // Case 2: one NULL, one not
    if (!root1 || !root2)
        return false;
      return (root1->data == root2->data) &&
           isidentical(root1->left, root2->left) &&
           isidentical(root1->right, root2->right);

}
int main() {

    Node* root = nullptr;
    Node* root1=nullptr;

    Node helper(0);   //node with data 0

    root = helper.insert(root, 10);//root will give information about where to pass the value
    root = helper.insert(root, 5);
    root = helper.insert(root, 20);
    root = helper.insert(root, 3);
    root = helper.insert(root, 7);

    root1 = helper.insert(root1, 10);
    root1 = helper.insert(root1, 5);
    root1 = helper.insert(root1, 20);
    root1 = helper.insert(root1, 3);
    root1 = helper.insert(root1, 9);


    cout << "Inorder Traversal: ";
    helper.inorder(root);
    cout<<endl;
    cout<<"height of the tree :- "<<helper.height(root);
    cout<<endl;
    cout<<"count of Node:- "<<helper.count(root);
    cout<<endl;
    cout<<"sum of the node:-"<<helper.sumNode(root);
    cout<<endl;
    cout<<"the node are identical:-"<<helper.isidentical(root,root1);
cout<<endl;

 
delete root;
    return 0;
}