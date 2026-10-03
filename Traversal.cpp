#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left, *right;

    Node(int x){
        data = x;
        left = right = NULL;

    }
};

Node* BinaryTree(){
 int x ;
 cin>>x;
 if(x == -1)
    return NULL;

    Node* temp = new Node(x);

    //left Section---
    cout<<"enter the left child of "<<x;
    temp->left = BinaryTree();

    //right section---
    cout<<"enter the right child of "<<x;
    temp->right = BinaryTree();

    return temp;
}
//Preorder Traversal-----
void preOrder(Node *root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

//In-order Traversal-----
void InOrder(Node *root){
    if(root == NULL) return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

//Postoreder Traversal-----
void postOreder(Node *root){
    if(root == NULL) return;
    postOreder(root->left);
    postOreder(root->right);
    cout<<root->data<<" ";
}
int main(){
    cout<<"enter the root Node";
    Node *root;
    root = BinaryTree();
    preOrder(root); cout<<endl;
    InOrder(root); cout<<endl;
    postOreder(root); cout<<endl;
    return 0;
    
}
//the time complexity was for evry traversal is O(n) 
//the sc in worst case will ne O(n)