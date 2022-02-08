// Program for Linear Search
#include<bits/stdc++.h>
using namespace std;
int Linear_Search(int a[],int n,int key){
    for(int i=0;i<n;i++){
    if(a[i]==key) 
      { 
          return i;
      }
    }
    return -1;
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }
int key;
cin>>key;                  // key to be found in array a with size n
int res1=Linear_Search(a,n,key);
if(res1==-1)
  cout<<"Key not Found";
else
  cout<<"Key found at location "<<res1+1;
return 0;
}