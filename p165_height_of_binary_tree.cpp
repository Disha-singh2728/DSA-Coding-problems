#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node *left,*right;
};
node* newNode(int data){
node* temp=new node();
temp->data=data;
temp->left=NULL;
temp->right=NULL;
return(temp);
}
int height_tree(node* root){
if(root==NULL)
return -1 ;
else{
int left_height=height_tree(root->left);
int right_height=height_tree(root->right);
if(left_height>right_height)
return(left_height+1);
else 
return(right_height+1);
}
}
int main(){
node* root= newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5);
height_tree(root);
return 0;
}