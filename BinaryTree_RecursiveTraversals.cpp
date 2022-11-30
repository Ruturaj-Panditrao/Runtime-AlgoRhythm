#include <iostream>
using namespace std;


class Node
{
    public :
    int value;
    Node* left;
    Node* right;
    // Node Class
    Node()  // Default Constructor of class Node
    {
        value = -1;
        left = nullptr;
        right = nullptr;
    }
    Node(int v) // Parameterized constructor of class Node
    {
        value  = v ;
        left = nullptr;
        right = nullptr;
    }
};

class Tree
{
    public :
    Node* root;

    Tree()
    {
        root = nullptr;
    }

    Node* createtree() // Recursive Tree Creation Method
    {
        int x;
        cout<<"Enter the Value of Node : "<<endl;
        cin>>x;
        if(x==-1) return nullptr;
        Node* p = new Node(x);
        cout<<"Entering the Left Part of "<<x<<" : "<<endl;
        p->left = createtree();
        cout<<"Entering the Right Part of "<<x<<" : "<<endl;
        p->right = createtree();
        return p;
    }

    void inorder(Node* p) // Inorder Traversal
    {
        if(p==nullptr) return;
        inorder(p->left);
        // Move to the left of current Node
        cout<<p->value<<" ";
        // Print the value of Node
        inorder(p->right);
        // Move to the right of current Node
    }

    void preorder(Node* p) // Preorder Traversal
    {
        if(p==nullptr) return;
        cout<<p->value<<" ";
        // Print the value of Node
        preorder(p->left);
        // Move to the left of current Node
        preorder(p->right);
        // Move to the right of current Node
    }

    void postorder(Node* p) // Postorder Traversal
    {
        if(p==nullptr) return;
        // Move to the left of current Node
        postorder(p->left);
        // Move to the right of current Node
        postorder(p->right);
        // Print the value of Node
        cout<<p->value<<" ";
    }
};
int main()
{
    Tree obj;
    obj.root = obj.createtree();
    cout<<"Recursive Inorder Traversal : ";
    obj.inorder(obj.root); // Calling the Inorder Traversal Method
    cout<<endl;
    cout<<"Recursive Preorder Traversal : ";
    obj.preorder(obj.root); // Calling the Preorder Traversal Method
    cout<<endl;
    cout<<"Recursive Postorder Traversal : ";
    obj.postorder(obj.root); // Calling the Postorder Traversal Method
}