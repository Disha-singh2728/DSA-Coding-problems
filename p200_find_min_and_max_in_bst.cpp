#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node *left,*right;
};
node* newNode(int root){
node* temp=new node();
temp->data=root;
temp->left=NULL;
temp->right=NULL;
return(temp);
}
 node* insert(node* root, int data){
if(root==NULL)   // if tree is empty just insert the new node as root node
return(newNode(data));
else if(data<=root->data)    // if new node is less than root insert node in the left subtree
root->left=insert(root->left,data);
else
root->right=insert(root->right,data); // if node is greater than root , insert node in the right subtree
return(root);
}
// to find the minimum value in the bst we do not need to travel the whole tree just traverse and reach the left most node of the left subtree
int min_value_bst(node* root){
node* temp=root;
while(temp && temp->left!=NULL)
  temp=temp->left;
return(temp->data);
}
// to find maximum value we just need to trverse the right subtree , till we reach to the right most node of right subtree
int max_value_bst( node* root){
node* temp=root;
while(temp && temp->right!=NULL)
 temp=temp->right;
return(temp->data);
}
int main(){
// intialy tree is empty , hence root pointing to null
node* root=NULL;
root=insert(root,5);// insert root node 
insert(root,3 ); // insert other nodes of bst
insert(root,6 );
insert(root,2 );
insert(root,4 );
insert(root,7 );
cout<<"Min of BST:"<<min_value_bst(root)<<endl;
cout<<"Max of BST:"<<max_value_bst(root)<<endl;
return 0;
}