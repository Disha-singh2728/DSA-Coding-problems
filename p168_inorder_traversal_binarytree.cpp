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
void inorder_traversal(Node* root){
if(root==NULL)
return;
else
{
inorder_traversal(root->left);
cout<<root->data<<" ";
inorder_traversal(root->right);
}
}
int main(){
Node* root= newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5); 
inorder_traversal(root);
return 0;
}