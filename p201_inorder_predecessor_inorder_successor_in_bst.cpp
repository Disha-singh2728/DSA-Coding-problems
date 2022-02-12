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
void find_inorder_predecessor_and_inorder_sucessor_bst(node* root,node* pre,node* suc,int key){
if(root==NULL)
return;
if(root->data==key){
  if(root->left!=NULL)
  {
    node* temp=root->left;
    while(temp->right)
     temp=temp->right;
    pre=temp;
  }
  if(root->right!=NULL)
  {
    node* temp=root->right;
    while(temp->left)
     temp=temp->left;
    suc=temp;
  }
return;
}
if(root->data>key)
{
  suc=root;
  find_inorder_predecessor_and_inorder_sucessor_bst(root->left,pre,suc,key);
}
else
{
  pre=root;
  find_inorder_predecessor_and_inorder_sucessor_bst(root->right,pre,suc,key);
}
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
node* pre=NULL,*suc=NULL;
int key=5;
find_inorder_predecessor_and_inorder_sucessor_bst(root,pre,suc,key);
if(pre!=NULL)
cout<<"Predecessor of key is:"<<pre->data<<endl;
else
cout<<"No predecessor"<<endl;
if(suc!=NULL)
cout<<"Successor of key is:"<<suc->data<<endl;
else
cout<<" No successor"<<endl;
return 0;
}