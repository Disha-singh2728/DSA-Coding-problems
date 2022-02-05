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
void preorder_traversal(Node* root){
if(root==NULL)
return;
else
{
cout<<root->data<<" ";
preorder_traversal(root->left);
preorder_traversal(root->right);
}
}
int main(){
Node* root= newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5); 
preorder_traversal(root);
return 0;
}