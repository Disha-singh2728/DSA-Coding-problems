
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
int height_tree(node* root){
if(root==NULL)
return 0;
else{
return(1+max(height_tree(root->left),height_tree(root->right)));
}
}
int diameter_binarytree(node* root){
if(root==NULL)
return -1;
else
{
int left_height=height_tree(root->left);
int right_height=height_tree(root->right);
int left_diameter=diameter_binarytree(root->left);
int right_diameter=diameter_binarytree(root->right);
return (max(left_height+right_height+1,max(left_diameter,right_diameter)));
}
}
int main(){
node* root=newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5);
cout<<diameter_binarytree(root);
return 0;
}