#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data ;
    Node * left;
    Node* right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

int main(){
    int x, first, second;
    cout<<"Enter the root Node"<<endl;
    cin>>x;
   queue<Node*> q;
   Node *root = new Node(x);
   q.push(root);
   while(!q.empty()){
  Node* temp = q.front();
  q.pop();

  //left node
  cout<<"enter the left child of "<<temp->data<<endl;
  cin>>first;
  if(first != -1){
    temp->left = new Node(first);
    q.push(temp->left);
  }

  //right node
  cout<<"enter the right child of "<<temp->data<<endl;
 cin>>second;
 if (second != -1){
    temp->right = new Node(second);
    q.push(temp->right);
 }

  
   }
}