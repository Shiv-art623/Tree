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
void TotalSum(Node* root, int &sum){
    if(root == NULL) return;
    sum += root->data;
    TotalSum(root->left, sum);
    TotalSum(root->right,sum);
}

//other way---
int totalSum(Node *root){
    if(root == NULL) return 0;
    return (root->data + totalSum(root->left) + totalSum(root->right));
}
int main(){
    cout<<"enter the root Node";
    Node *root;
    root = BinaryTree();
    int sum = 0;
    TotalSum(root, sum);
    cout<<sum<<endl;
    cout<<totalSum(root);
    return 0;
    
}