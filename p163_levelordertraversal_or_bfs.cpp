#include<bits/stdc++.h>
using namespace std;
// Binary tree has node with childs as left node and right node
class node{
public:
int data;
node *left ,*right;
};
// Function to create new node and allocate pointers
node* newNode(int data){
node* Node=new node();
Node->data=data;
Node->left=NULL;
Node->right=NULL;
return(Node);
}
void printcurrent_level(node* root,int level){
    if(root==NULL)
     return;
    if(level==1)
    cout<<root->data<<" ";
    else if(level>1){
    printcurrent_level(root->left,level-1);
    printcurrent_level(root->right,level-1);
    }
}
// Function to calculate height of the tree
int  height_tree(node* node){
if(node==NULL) return 0;
else{
int left_height=height_tree(node->left);
int right_height=height_tree(node->right);
if(left_height>right_height)
return(left_height+1);
else
return(right_height+1);}
}
void level_order_traversal(node* root){
int h=height_tree(root);
for(int i=0;i<=h;i++)
 printcurrent_level(root,i);
}


int main(){

node* root= newNode(1);                                 
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5);
root->right->left=newNode(6);
root->right->right=newNode(7);
level_order_traversal(root);
return 0;

} 