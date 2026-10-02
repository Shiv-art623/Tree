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
int main(){
    cout<<"enter the root Node";
    Node *root;
    root = BinaryTree();
    return 0;
    
}