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
int isbalancetree(node* root, int hght){
// heights of left and right subtree
int lh=0,rh=0;
// l and r are true when left and right subtree are balanced else false i.e 0
int l=0,r=0;
if(root==NULL){
hght=0;
return 1;
}
l=isbalancetree(root->left,lh);
r=isbalancetree(root->left,rh);
hght=(lh>rh?lh:rh)+1;
if(abs(lh-rh)>=2)
 return 0;
else
 return l&&r;
}
int main(){
int hght=0;
node* root=newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5);
root->right->left=newNode(6);
root->right->right=newNode(7);
if(isbalancetree(root,hght))
 cout<<"Tree is balanced";
else
 cout<<"Tree is not balanced";
return 0;
}