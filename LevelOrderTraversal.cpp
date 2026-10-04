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

vector<int> levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    vector<int> ans;
    Node* temp;
    while(!q.empty()){
      temp = q.front();
      q.pop();
      ans.push_back(temp->data);
      if(temp->left) q.push(temp->left);
      if(temp->right) q.push(temp->right);
    }
    return ans;
}

//Find the size of Binary Tree----
void Totalh(Node* root, int &count){
    if(root == NULL) return;
    count++;
    Totalh(root->left,count);
    Totalh(root->right, count);
}
int main(){
    cout<<"enter the root Node";
    Node *root;
    root = BinaryTree();
    vector<int> ans = levelOrder(root);
    for(auto i : ans) cout<<i<<" ";
    int count = 0;
    Totalh(root, count);
    cout<<count;

    return 0;
    
}
//TC = O(n) and SC = O(n)