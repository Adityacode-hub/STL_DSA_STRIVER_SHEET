#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class lcabst
{
public:
    Node* ans = nullptr;

    void fun(Node* root, Node* p, Node* q)
    {
        if (root == nullptr)
            return;

        // ensure p <= q
        if (p->data > q->data)
        {
            Node* temp = p;
            p = q;
            q = temp;
        }

        // if root matches p or q
        if (root == p || root == q)
        {
            ans = root;
            return;
        }

        // dono right me
        if (root->data < p->data)
        {
            fun(root->right, p, q);
        }
        // dono left me
        else if (root->data > q->data)
        {
            fun(root->left, p, q);
        }
        // split point => LCA
        else
        {
            ans = root;
            return;
        }
    }
};

int main()
{
    /*
            6
           / \
          2   8
         / \ / \
        0  4 7  9
    */

    Node* root = new Node(6);
    root->left = new Node(2);
    root->right = new Node(8);

    root->left->left = new Node(0);
    root->left->right = new Node(4);

    root->right->left = new Node(7);
    root->right->right = new Node(9);

    lcabst obj;

    Node* p = root->left;   // 2
    Node* q = root->right;  // 8

    obj.fun(root, p, q);

    if (obj.ans != nullptr)
        cout << "LCA: " << obj.ans->data << endl;
    else
        cout << "Not found" << endl;

    return 0;
}