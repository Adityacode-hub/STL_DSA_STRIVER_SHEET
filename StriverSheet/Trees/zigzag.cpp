#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

vector<int> zigzagTraversal(Node* root) {

    vector<int> result;
    if(root == nullptr) 
      return result;

    queue<Node*> q;
    q.push(root);

    bool leftToRight = true;

    while(!q.empty()) //while the queue is not empty
    {

        int size = q.size();
        vector<int> level(size);//making of the temproary array

        for(int i = 0; i < size; i++)//level ke har node ko process karte hain 
        {

            Node* temp = q.front();//taking out the node form the queue
            q.pop();

            int index;

            if(leftToRight)//from i=0 ->index =0,i=1 ->index=1
                index = i;
            else
                index = size - i - 1;

            level[index] = temp->data;//value store karo
//storing the children in a queue
            if(temp->left)
                q.push(temp->left);

            if(temp->right)
                q.push(temp->right);
        }

        for(int x : level)//level ka answer mei add karo
            result.push_back(x);

        leftToRight = !leftToRight;//direction change karo
    }

    return result;
}
int main() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> ans = zigzagTraversal(root);

    for(int x : ans)
        cout << x << " ";

}