class Node
{
    public:
      int data;
      Node* left;
      Node* right;
      Node(int val);
      ~Node();
      bool isidentical(Node*root1,Node*root2);
};
Node::Node(int val)
{
    data=val;
    left=nullptr;
    right=nullptr;
}
bool Node::isidentical(Node*root1,Node*root2)
{
    if(root==nullptr)
    {
        return ;
    }
     bool isleftsame=isidentical(root1->left,root2->left);
     bool isrightsame=isidentical(root1->right,root2->right);
     return(isleftsame &&isrightsame &&root1->data==root2->data);

}
int main()
{
    Node* root=nullptr;
    Node* helper=0;
   

}