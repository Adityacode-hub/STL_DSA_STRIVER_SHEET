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

----------------------------------------------------
think of  node(left,data,right) aur root ka type h node so ismei teen component h do not think about component think about root only
---------------------------------------------------
          dada ji (root node)/root means single alwys
  left    /         \ right
        papa       chaha
        /  \         /
      /     \        beti
    /        \
    aditya   anuj


    why we have taken the queue because the thing is in the queue we need to maintain the order

    queue:- order maintain rahta h
    both side se insert ya nikal skte h 
    first in first out principle pe kaam krta h yeh
pushed from the back alaways tabhi peeche se push karenge and aage se nikal lenge this is the simple working of the queue.

queue
-----------------------------------
   <- yaha se pop                  1, 2,3  ->yaha se push
-----------------------------------
    stack:-first in last out pe kaam krta h yeh
    ismei order reverse ho jata h
