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
void inorder(node* root){
if(root==NULL)
return;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}
// for non-empty bst , min value can be found in the left most of left subtree 
node* minvaluenode(node* root){
node* temp=root;
while(temp && temp->left!=NULL)
 temp=temp->left;
return(temp);

}
// this function takes root and key to be deleted and deletes the key if found and returns new root
node* deletenode(node* root,int key){
//base case
if(root==NULL)
return NULL;
// if key is smaller then the root, then it lies in the left subtree of the binary search tree
if(key<root->data)
root->left=deletenode(root->left,key);
else if(key>root->data)  // if key is greater then the root, then it lies in the right subtree of the bst
root->right=deletenode(root->right,key);
else      // if key is equal to the root, then this node is to be deleted
{
  // if root has no child
  if(root->left==NULL and root->right==NULL)
  return NULL;
  //if root has one child i.e on right subtree
  else if(root->left==NULL)
  {
    node* temp=root->right;
    free(root);
    return(temp);
  }
  // if root has one child i.e on left subtree
  else if(root->right==NULL)
  {
    node* temp=root->left;
    free(root);
    return(temp);
  }
// if root has two childs
//find inorder successor of the root(i.e smallest element in the right subtree)
node* temp=minvaluenode(root->right);
// copy the inorder successor node in the root 
root->data=temp->data;
// delete the inorder successor
root->right=deletenode(root->right,temp->data);
}
return root;  // return the new root after deleting the key from the bst
}
int main(){
node* root=newNode(5);
root->left=newNode(3);
root->right=newNode(6);
root->left->left=newNode(2);
root->left->right=newNode(4);
root->right->right=newNode(7);
inorder(root);
cout<<endl;
deletenode(root,3);
inorder(root);
return 0;
}