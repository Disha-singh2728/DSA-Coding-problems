#include<bits/stdc++.h>
using namespace std;
// Binary tree has node with childs as left node and right node
struct  node{
int data;
node *left ,*right;
};
// function to create new node and allocate data and pointers to child
node* newNode(int data){
node* Node=new node();
Node->data=data;
Node->left=NULL;
Node->right=NULL;
return(Node);
}
void level_order_traversal(node* root){
if(root==NULL)
return;
queue<node*>q;
q.push(root);
while(q.empty()==false){
  node* Node=q.front();
  cout<<Node->data<<" ";
  q.pop();
  if(Node->left!=NULL)
   q.push(Node->left);
  if(Node->right!=NULL)
   q.push(Node->right);
}

}
int main(){
node* root=newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5);
level_order_traversal(root);
return 0;
}