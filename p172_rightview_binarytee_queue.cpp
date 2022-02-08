#include<bits/stdc++.h>
using namespace std;
struct node{
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
void right_binary_tree(node* root){
if(root==NULL)
return;
queue<node*>q;
q.push(root);
while(!q.empty()){
int n=q.size();
while(n--){
 node*temp=q.front();
 q.pop();
 if(n==0)      // leaf present at the last of the particular level are right most
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
right_binary_tree(root);
}