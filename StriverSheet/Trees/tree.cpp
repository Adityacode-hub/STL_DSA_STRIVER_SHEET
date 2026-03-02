// traversal of tree

#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val);
    ~Node();
    void inorder(Node* root);
    void preorder(Node* root);
    void postorder(Node* root);
    Node* insert(Node* root, int val);
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
    cout<<"Deleting node"<<data<<endl;
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

int main() {

    Node* root = nullptr;

    Node helper(0);   //node with data 0

    root = helper.insert(root, 10);
    root = helper.insert(root, 5);
    root = helper.insert(root, 20);
    root = helper.insert(root, 3);
    root = helper.insert(root, 7);

    cout << "Inorder Traversal: ";
    helper.inorder(root);
cout<<endl;
delete root;
    return 0;
}