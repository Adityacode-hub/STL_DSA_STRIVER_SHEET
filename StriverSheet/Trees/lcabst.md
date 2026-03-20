--> this is the one which split the lca in two different segment 
            -------
            |  lca |
            --------
              /   \
            /       \ 
           /        \
           p         q

```cpp
assume that p is the smaller value and q is the greater value 

example {5,10}

we are in the root and we have to find for the p and q.
----------------------------------------------------
Node* ans
fun(Node* root,Node*p,Node*q)
 1. root==p && root==q then ans= root;
 
 2. root-> data < p->data&& q->data //less than
     fun(root->right,p,q);
3. root->data > p->data && q->data //greater than
       fun(root->left,p,q);

4. root->data >p->data && root->data < q->data
{
    ans=root;
    return;
}
-----------------------------------------------------