#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
struct Node *left,*right;
};
Node* newNode(int data){
Node* node =new Node;
node->data = data;
node->left=NULL;
node->right=NULL;
return(node);
}
int height_tree(Node* root){
if(root==NULL)
return 0;
else{
int l_height=height_tree(root->left);
int r_height=height_tree(root->right);
return(1+max(l_height,r_height));
}
}
void Current_level_traversal(Node* root,int level){
if(root==NULL)
return;
if(level==1)
cout<<root->data<<" ";
else if(level>1){
Current_level_traversal(root->left,level-1);
Current_level_traversal(root->right,level-1);
}
}
void Reverse_level_order_traversal(Node* root){
int h=height_tree(root);
for(int i=h;i>=1;i--)
  Current_level_traversal(root,i);
}
int main(){
Node* root= newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5); 
Reverse_level_order_traversal(root);
return 0;
}