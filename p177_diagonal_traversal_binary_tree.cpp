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
vector<vector<int>> result;
void Diagonal_traversal_binary(node* root){
if(root==NULL)
return;
queue<node*>q;
q.push(root);
while(!q.empty()){
 int n=q.size();
 vector<int>answer;
 while(n--){
  node* temp=q.front();
  q.pop();
  while(temp){
    answer.push_back(temp->data);
    if(temp->left)
      q.push(temp->left);
    temp=temp->right;
  } 
 }
result.push_back(answer);
}
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
Diagonal_traversal_binary(root);
for(int i=0;i<result.size();i++)
 for(int j=0;j<result[i].size();j++)
  cout<<result[i][j]<<" ";
return 0;
}