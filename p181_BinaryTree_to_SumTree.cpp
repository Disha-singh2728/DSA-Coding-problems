#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node *left,*right;
};
node* newNode(int data){
node* temp=new node();
temp->data=data;
temp->left=NULL;
temp->right=NULL;
return(temp);
}
int tosumtree(node* root){
 if(root==NULL)           //Base case
 return 0;
 int old_val=root->data;      // stores the old value of node's data
 root->data=tosumtree(root->left)+tosumtree(root->right);   // recursively call for left and right subtree and store the sum as new value of this node
 return(root->data+old_val);   // then we retuen the sum of values of nodes in left and right subtrees and old value of this node

}
void print_inorder(node* root){
  if(root==NULL)
  return;
  print_inorder(root->left);
  cout<<root->data<<" ";
  print_inorder(root->right);
}
int main(){
node* root=newNode(10);
root->left=newNode(-2);
root->right=newNode(6);
root->left->left=newNode(8);
root->left->right=newNode(-4);
root->right->left=newNode(7);
root->right->right=newNode(5);
print_inorder(root);
tosumtree(root);
cout<<endl;
print_inorder(root);
return 0;
}