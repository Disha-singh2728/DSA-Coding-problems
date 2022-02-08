#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node *left,*right;
};
node* newNode(int data){
node* Node=new node();
Node->data=data;
Node->left=NULL;
Node->right=NULL;
return(Node);
}
void left_viewutil(node* root,int level,int *max_level){
if(root==NULL) return;
if(*max_level<level)
{
    cout<<root->data<<" ";
    *max_level=level;
}
left_viewutil(root->left, level + 1, max_level);
left_viewutil(root->right, level + 1, max_level);
}
void left_view_binarytree(node* root){
int max_level=0;
left_viewutil(root,1,&max_level);
}
int main(){
node* root=newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5);
root->right->left=newNode(6);
root->right->right=newNode(7);
left_view_binarytree(root);
return 0;
}