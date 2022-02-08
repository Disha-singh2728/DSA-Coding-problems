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
void left_view_binarytree(node* root){
if(root==NULL)
return;
queue<node*> q;
q.push(root);
while(!q.empty()){
 int n=q.size();
 for(int i=1;i<=n;i++){
   node* temp = q.front();
   q.pop();
   if(i==1)
   cout<<temp->data<<" ";
   if(temp->left!=NULL)
   q.push(temp->left);
   if(temp->right!=NULL)
   q.push(temp->right);
 }
}
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