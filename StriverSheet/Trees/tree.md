## this basically deals with the structure
----------------------
root is given always
----------------------
types:-
----------------------
1. traversal

2. mirror/symmetry

3. search

4. validation

5. path sum

6. construction

----------------------------------------
Traversal :- Inorder,Preorder,Postorder
----------------------------------------
Inorder:- (left ->node ->right)
Preorder:- (node ->left->right)
Postorder:- (left->right->node)
-----------------------------------------

void leetcode(Node* root)
{
    fun(root);
}

//logic
if(root==null)
{
    return;
}

fun(node->left);
cout<<node->data;
fun(node->right);

struct Node
{
    public:
     int data;
     Node* left:
     Node* right;
     Node(int val);
     void inorder(Node* root);
{
    data=val;
    left=null;
    right=null;
}
};
Node* insert(Node*root,int val)
{
if(root==null)
{
    return;
}
if(val<root->data)
{
    root->left=insert(root->left,val);
}
else
{
    root->right=insert(root->right,val);
}
return root;
}
void inorder(Node*root)
{
    if(root==null)
{
    return;
}
inorder(node->left);
cout<<node->data;
inorder(node->right);
}