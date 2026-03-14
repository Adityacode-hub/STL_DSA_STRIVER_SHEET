#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    Node* lca(Node* root, Node* p, Node* q)
    {
      //base case
        if (root == nullptr)
            return nullptr;

        if (root == p || root == q)
            return root;
    //recursive case
        Node* left = lca(root->left, p, q);//it will recursively call the function 
        Node* right = lca(root->right, p, q);
//result
        if (left && right)
            return root;

        if (left)
            return left;

        return right;
    }
};
int main()
{
    /*
           1
         /   \
        2     3
       / \   / \
      4   5 6   7
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Solution obj;

    Node* p = root->left->left;   // Node 4
    Node* q = root->left->right;  // Node 5

    Node* ans = obj.lca(root, p, q);

    if(ans != nullptr)
        cout << "LCA: " << ans->data << endl;

    return 0;
}
//it will return the root only when it will get the p and q in the subtree  this is the basic working of the  lca algorithm