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
void mirror_tree(node* root){
if(root==NULL)
return;
else{
struct node* temp;
mirror_tree(root->left);
mirror_tree(root->right);
temp=root->left;
root->left=root->right;
root->right=temp;
}
}
void inoder_traversal(node* root){
if(root==NULL)
return;
else{
  inoder_traversal(root->left);
  cout<<root->data<<" ";
  inoder_traversal(root->right);
}
}
int main(){
node* root=newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5);
// inorder traversal of given binary tree
inoder_traversal(root);
cout<<endl;
//mirror_tree function to convert the binary tree to mirror of it
mirror_tree(root);
//inorder traversal of mirror tree
inoder_traversal(root);
return 0;
}