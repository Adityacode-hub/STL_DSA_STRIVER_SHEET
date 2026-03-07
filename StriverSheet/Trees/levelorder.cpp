
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
    void levelorder(Node*root);
};

Node* insert(Node* root, int val)
{
    if (root == nullptr)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;

    
}
void Node::levelorder(Node*root)
{
    if(root==nullptr)
    {
        return;
    }
    queue<Node*>q;
    q.push(root);//queue mei root push ho gaya 
    while(!q.empty()) 
    {
        int size=q.size();//jitne size ka queue h utne chalega
        vector<int>temp;//temproary to store it
        while(size--)
        {
            Node* t=q.front();//point the root 
            q.pop();
            temp.push_back(t->data);
            if(t->left!=nullptr)
            {
                q.push(t->left);//agar left child h
            }
            if(t->right!=nullptr)
            {
                q.push(t->right);//agar right child h
            }
        }

    }
}

int main()
{
    Node* root = nullptr;

    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 7);
    root = insert(root, 8);
    root = insert(root, 1);
}