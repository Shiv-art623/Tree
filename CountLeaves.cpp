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

//One way---
void countLeaf(Node* root , int &count){
    if(root == NULL) return;
    if(!root->left && !root->right) count++;
    countLeaf(root->left, count);
    countLeaf(root->right,count);
}

//another way----
int countleaf(Node* root){
    if(root == NULL) return 0;
    if(!root->left && !root->right) return 1;
    return (countleaf(root->left)+ countleaf(root->right));
}
int main(){
    cout<<"enter the root Node";
    Node *root;
    root = BinaryTree();
    int count = 0;
    countLeaf(root, count);
    cout<<count<<endl;
    cout<<countleaf(root);
    return 0;
    
}